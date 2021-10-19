/*
** ETNA PROJECT, 18/10/2021 by kwamou_b
** my_print_digits
** File description:
**      function that displays all the digits
*/
#include <unistd.h>

void my_putchar(char c) {
    write(1,&c,1);
};

void my_print_digits(int n) {
    
    for (char c=48; c<=57;c++)
    {
        my_putchar(c);
    }
    
}
