/*
** ETNA PROJECT, 20/10/2021 by kwamou_b
** my_revstr.c
** File description:
**      return inverse of word
*/
#include <unistd.h>
#include <stdio.h>

void my_putchar(char c) {
 write(1, &c, sizeof(char));
}

char *my_revstr(char *str)
{
 int	i = 0;
 int size = 0;
 char word;

	while (str[size]) {
   size++;
	}


  while (i < size) {
		  word = str[i];
      str[i] = str[size - i - 1];
      str[size - i - 1] = word;
      i++;
		}
 return word;
}



int main() {
printf("%s",my_revstr("Hello"));
 return 0;
}