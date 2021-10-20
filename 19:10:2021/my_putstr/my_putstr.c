/*
** ETNA PROJECT, 19/10/2021 by kwamou_b
** my_putnbr
** File description:
**      print word function
*/
#include <unistd.h>

void my_putchar(char c);

void my_putstr(const char *str) {
 int	i;
	i = 0;
	while (str[i]) {
		my_putchar(str[i]);
		i++;
		}
}
