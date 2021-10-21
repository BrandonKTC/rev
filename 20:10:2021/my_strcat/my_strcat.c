/*
** ETNA PROJECT, 21/10/2021 by kwamou_b
** my_strcat
** File description:
**      string 
*/
#include <unistd.h>

int my_strlen(const char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}
char *my_strcat(char *dest, const char *src)
{
    int i = my_strlen(dest);
    int j = 0;
    while(j<my_strlen(src))
    {
        dest[i+j]=src[j];
        j++;
    }
    dest[i+j]='\0';
    return dest;
}