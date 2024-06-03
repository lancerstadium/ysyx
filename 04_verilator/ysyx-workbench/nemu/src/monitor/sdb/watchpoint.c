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

WP* new_wp() {
  if (free_ == NULL) {
    return NULL;
  }
  WP* wp = free_;
  free_ = free_->next;

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

  return wp;
}


void free_wp(WP *wp) {
  // find in head
  WP* tmp = head;
  if(tmp == NULL) {
    return;
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


}