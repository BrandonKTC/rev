/*
** ETNA PROJECT, 27/10/2021 by kwamou_b
** my_push_back_to_list
** File description:
**      Linked Lists
*/

#include "../include/my_list.h"
#include <stdlib.h>
#include <stdio.h>

linked_list_t *my_push_back_to_list(int value, linked_list_t *list)
{
    linked_list_t *node = malloc(sizeof(linked_list_t));
    node->value = value;
    node->next = NULL;
    if(list == NULL)
        return node;
    else
    {
        linked_list_t *temp = list;
        while(temp->next != NULL)
        {
            temp = temp -> next;    
        }
        temp->next = node;
        return list;
    }
}