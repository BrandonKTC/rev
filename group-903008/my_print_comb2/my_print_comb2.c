/*
** ETNA PROJECT, 18/10/2021 by kwamou_b
** my_print_comb2
** File description:
**      function 
*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

void my_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			my_putchar('0' + (a / 10));
			my_putchar('0' + (a % 10));
			my_putchar(' ');
			my_putchar('0' + (b / 10));
			my_putchar('0' + (b % 10));
			if (a != 98)
			{
				my_putchar(',');
				my_putchar(' ');
			}
		}
	}

}
