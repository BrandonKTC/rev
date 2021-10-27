/*
** ETNA PROJECT, 27/10/2021 by kwamou_b
** my_pop_back_from_list
** File description:
**      Linked Lists
*/

#include "../include/my_list.h"
#include <stdlib.h>
#include <stdio.h>

linked_list_t *my_pop_back_from_list(linked_list_t *list)
{
    if(list == NULL)
        return NULL;
    if(list->next == NULL)
    {
        free(list);
        return NULL;
    }
    linked_list_t *temp = list;
    linked_list_t *temp2 = list;
    while(temp->next != NULL)
    {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = NULL;
    free(temp);
    return list;
}