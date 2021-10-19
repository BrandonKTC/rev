/*
** ETNA PROJECT, 18/10/2021 by kwamou_b
** my_print_alpha
** File description:
**      prints the alphabet in lowercase
*/
#include <unistd.h>

void my_putchar(char c);

void my_print_alpha(void)
{

    for (char i ='a'; i<='z'; i++)
    {
        my_putchar(i);

    }
    my_putchar('\n');
}