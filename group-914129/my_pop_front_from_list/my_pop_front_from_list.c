/*
** ETNA PROJECT, 27/10/2021 by kwamou_b
** my_pop_front_from_list
** File description:
**      linked lists
*/

#include "../include/my_list.h"
#include <stdlib.h>
#include <stdio.h>

linked_list_t *my_pop_front_from_list(linked_list_t *list) {
  linked_list_t *node = list -> next;
  free(list);
  return node;
}