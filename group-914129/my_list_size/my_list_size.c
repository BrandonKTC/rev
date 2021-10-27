/*
** ETNA PROJECT, 27/10/2021 by kwamou_b
** my_list_size
** File description:
**      linked lists
*/

#include "../include/my_list.h"
#include <stdlib.h>
#include <stdio.h>

int my_list_size(const linked_list_t *list) {

 int count = 0;

 while (list != NULL) {
  list = list -> next;
  count ++;
 }

return count;
}