/*
** ETNA PROJECT, 18/10/2021 by kwamou_b
** my_isneg
** File description:
**      if else condition
*/
#include <unistd.h>

void my_putchar(char c);

void my_isneg(int n){
    if (n<0)
    {
        my_putchar(78);
    }
    else
    {
        my_putchar(80);
    }
}