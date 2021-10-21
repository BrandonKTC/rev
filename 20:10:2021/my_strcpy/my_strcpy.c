/*
** ETNA PROJECT, 20/10/2021 by kwamou_b
** my_strcpy
** File description:
**      copy string
*/
#include <unistd.h>

char *my_strcpy(char *dest, const char *src) {

 int i = 0;
 while (src[i]) {
   dest[i] = src[i];
   i++;
 }
 dest[i] = '\0';
  return dest;

}