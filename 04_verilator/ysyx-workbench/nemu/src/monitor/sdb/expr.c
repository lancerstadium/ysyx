/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, 
  TK_EQ, TK_NE,
  TK_AND,
  TK_DEC,
  TK_HEX,
  TK_REG,
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +" , TK_NOTYPE},    // spaces
  {"\\+" , '+'},         // plus
  {"\\-" , '-'},         // minus
  {"\\*" , '*'},         // asterisk
  {"\\/" , '/'},         // slash
  {"\\(" , '('},         // lparen
  {"\\)" , ')'},         // rparen
  
  {"=="  , TK_EQ},        // equal
  {"!="  , TK_NE},        // not equal
  {"&&"  , TK_AND},       // and

  {"\\$[0-9a-z]+"  , TK_REG}, // register
  {"0x[0-9a-f]+"  , TK_HEX}, // hex
  {"[0-9]+"  , TK_DEC},       // decimal



};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = `%s` at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        Token *t = &tokens[nr_token ++];
        t->type = rules[i].token_type;
        strncpy(t->str, substr_start, substr_len);

        switch (rules[i].token_type) {
          case '+': break;
          case '-': break;
          case '*': break;
          case '/': break;
          case '(': break;
          case ')': break;
          case TK_EQ: break;
          case TK_NE: break;
          case TK_AND: break;
          case TK_DEC: break;
          case TK_HEX: break;
          case TK_REG: break;
          case TK_NOTYPE: break;
          default: TODO();
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

static void flush_token() {
  nr_token = 0;
  for (int i = 0; i < 32; i ++) {
    tokens[i].type = TK_NOTYPE;
    tokens[i].str[0] = '\0';
  }
}


static int find_op(int p, int q, bool* success) {
    int depth = 0;
    int res = p;
    int res_level = 10;
    *success = false;
    for (int i = p; i <= q; i++) {
        switch (tokens[i].type) {
            case '(':
                depth++;
                break;
            case ')':
                depth--;
                break;
            case TK_EQ:
            case TK_NE:
            case TK_AND:
                if (depth == 0 && res_level > 1) {
                    *success = true;
                    res = i;
                    res_level = 1;
                }
                break;
            case '+':
            case '-':
                if (depth == 0 && res_level > 2) {
                    *success = true;
                    res = i;
                    res_level = 2;
                }
                break;
            case '*':
            case '/':
                if (depth == 0 && res_level > 3) {
                    *success = true;
                    res = i;
                    res_level = 3;
                }
                break;
        }
    }
    return res;
}

static word_t eval(int p, int q) {
    char* e_p = tokens[p].str;
    int t_p = tokens[p].type;
    char* e_q = tokens[q].str;
    int t_q = tokens[q].type;
    if (p > q) {
        printf("Bad expr range: [%d, %d]\n", p, q);
        return 0;
    } else if (p == q) {
        word_t res = 0;
        if (t_p == TK_DEC)      { res = atoi(e_p);              }
        else if (t_p == TK_HEX) { res = strtol(e_p, NULL, 16);  }
        else if (t_p == TK_REG) {
            bool success;
            res = isa_reg_str2val(e_p + 1, &success);
            if (!success) { printf("Bad register: %s\n", e_p);  }
        }
        return res;
    } else if (t_p == '(' && t_q == ')') {
        return eval(p + 1, q - 1);
    } else if ((p < q) && (t_p == TK_NOTYPE)) {
        return eval(p + 1, q);
    } else if ((p < q) && (t_q == TK_NOTYPE)) {
        return eval(p, q - 1);
    } else {
        bool success;
        int op = find_op(p, q, &success);
        if (!success) {
            printf("Bad expr: (s: %s, e: %s)\n", e_p, e_q);
            return 0;
        }
        if (op == p) {  // Unary: +a, -a, *a
            word_t a = eval(op + 1, q);
            switch (tokens[op].type) {
                case '+': return a;
                case '-': return -a;
                case '*': return a;
                default: TODO();
            }
        } else {        // Binary: 
            word_t a = eval(p, op - 1);
            word_t b = eval(op + 1, q);
            switch (tokens[op].type) {
                case '+': return a + b;
                case '-': return a - b;
                case '*': return a * b;
                case '/': return a / b;
                case TK_EQ: return a == b;
                case TK_NE: return a != b;
                case TK_AND: return a && b;
                default: TODO();
            }
        }
    }
    printf("Expr eval fail: (s: %s, e: %s)\n", e_p, e_q);
    return 0;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */

  *success = true;
  int p = 0, q = nr_token - 1;

  word_t res = eval(p, q);
  flush_token();
  return res;
}
