/*
** ETNA PROJECT, 18/10/2021 by kwamou_b
** my_iseven
** File description:
**      is even ?
*/
#include <unistd.h>

void my_putchar(char c);

void my_iseven(int n){
    if (n%2 == 1)
    {
        my_putchar(79);
    }
    else
    {
        my_putchar(69);
    }
}