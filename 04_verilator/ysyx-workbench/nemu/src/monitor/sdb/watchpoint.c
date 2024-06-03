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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char* e;
  unsigned res;
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

int new_wp(char* e) {

  if (free_ == NULL) {
    printf("No extra free wp\n");
    return -1;
  }
  WP* wp = free_;
  free_ = free_->next;

  // deal with expr
  bool success;
  unsigned res = expr(e, &success);
  if(success) {
    wp->e = malloc(strlen(e) + 1);
    strcpy(wp->e, e);
    wp->res = res;
  } else {
    printf("Set wp expr fail: %s\n", e);
    return -1;
  }

  // find final head
  WP* tmp = head;
  if (tmp == NULL) {
    head = wp;
  } else {
    while (tmp->next != NULL) {
      tmp = tmp->next;
    }
    tmp->next = wp;
  }
  wp->next = NULL;
  printf("Set wp (expr: %s) at NO.%d\n", wp->e, wp->NO);
  return wp->NO;
}


void free_wp(int n) {
  if(n < 0 || n >= NR_WP) {
    printf("Invalid wp idx: %d\n", n);
    return;
  }
  WP *wp = &wp_pool[n];

  // find in head
  WP* tmp = head;
  if(tmp == NULL) {
    printf("No wp to free: %d\n", n);
    return;
  } else if (tmp == wp) {
    head = wp->next;
  } else {
    while (tmp->next != NULL) {
      if (tmp->next == wp) {
        tmp->next = wp->next;
        break;
      }
      tmp = tmp->next;
    }
  }

  // find final free_
  tmp = free_;
  if (tmp == NULL) {
    free_ = wp;
  } else {
    while (tmp->next != NULL) {
      tmp = tmp->next;
    }
    tmp->next = wp;
  }
  wp->next = NULL;

  printf("Free wp (expr: %s) at NO.%d\n", wp->e, wp->NO);
  free(wp->e);
  wp->e = NULL;
  wp->res = 0;

}

void info_wp(int n) {
  if(n >= 0 && n < NR_WP) {
    WP *wp = &wp_pool[n];
    printf("- [%2d] expr: %s, res: %u\n", wp->NO, wp->e, wp->res);
  } else {
    WP* tmp = head;
    printf("[Busy wp]: \n");
    while (tmp != NULL) {
      printf("- [%2d] expr: %s, res: %u\n", tmp->NO, tmp->e, tmp->res);
      tmp = tmp->next;
    }
  }
  return;
}

int scan_wp(bool *change) {
  WP* tmp = head;
  *change = false;
  int n = -1;
  while (tmp != NULL) {
    // deal with expr
    bool success;
    char* e = malloc(strlen(tmp->e) + 1);
    strcpy(e, tmp->e);
    unsigned res = expr(e, &success);
    if(success) {
      if (tmp->res != res)  {
        printf("Scan wp (%s) change: %u -> %u\n", tmp->e, tmp->res, res);
        tmp->res = res;
        *change = true;
        n = tmp->NO;
        break;
      }
    } else {
      printf("Scan wp expr fail: %s\n", e);
    }
    tmp = tmp->next;
  }
  return n;
}