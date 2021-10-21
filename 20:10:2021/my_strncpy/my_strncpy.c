/*
** ETNA PROJECT, 21/10/2021 by kwamou_b
** my_strncpy
** File description:
**      copy string
*/
#include <unistd.h>

char *my_strncpy(char *dest, const char *src, int n) {

 int i = 0;
 while (src[i]) {
   dest[i] = src[i];
   i++;
 }
while (i <= n) {
  dest[i] = '\0';
  i++;
}
  return dest;

}