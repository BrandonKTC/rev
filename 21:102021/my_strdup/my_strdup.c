/*
** ETNA PROJECT, 21/10/2021 by kwamou_b
** my_strdup
** File description:
**      memory allocation
*/
#include <stdlib.h>
#include <stdio.h>

int my_strlen(const char *str);

char *my_strcpy(char *dest, const char *src);

char *my_strdup(const char *src);

int main() {
 char test[] = "test";
 my_strdup(test);
}

char *my_strdup(const char *src) {

 char * dest;
 int size = my_strlen(src);

 dest = malloc(sizeof(char) * size);
 my_strcpy(dest, src);

 printf("%s",dest);

 return dest;
}

int my_strlen(const char *str)
{
  int i = 0;
  while(str[i])
  {
      i++;
  }
  return i;
}

char *my_strcpy(char *dest, const char *src) {

 int i = 0;
 while (src[i]) {
   dest[i] = src[i];
   i++;
 }
 dest[i] = '\0';
  return dest;

}