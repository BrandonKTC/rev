/*
** ETNA PROJECT, 18/10/2021 by kwamou_b
** my_print_comb
** File description:
**      function
*/
#include <unistd.h>

void my_putchar(char c);

void my_print_comb(void)
{
for (int i = 48; i < 58; i++)
 {
   for (int j = i + 1 ; j < 58 ; j++)
   {
       for (int k = j + 1; k < 58; k++)
       {
         my_putchar(i);
         my_putchar(j);
         my_putchar(k);
         if(i==55)
             break;
         my_putchar(44);
         my_putchar(32);
        }
     }
 }
}
