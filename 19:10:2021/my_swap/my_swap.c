/*
** ETNA PROJECT, 20/10/2021 by kwamou_b
** my_swap
** File description:
**      intervet number
*/
#include <unistd.h>
#include <stdio.h>

void my_swap(int *a, int *b){

    int *temp = a;
    a = b;
    b = temp;

}
