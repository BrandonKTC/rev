/*
** ETNA PROJECT, 27/10/2021 by kwamou_b
** my_push_front_to_list
** File description:
**      linked lists
*/

#include "../include/my_list.h"
#include <stdlib.h>
#include <stdio.h>


linked_list_t *my_push_front_to_list(int value, linked_list_t *list)
{
    linked_list_t *node;
    node = malloc(sizeof(*node));
    node->value = value;
    node->next = list;
    list = node;
    return list;
}