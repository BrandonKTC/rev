/*
** ETNA PROJECT, 21/10/2021 by kwamou_b
** my_strlowercase.c
** File description:
**      string
*/
#include <unistd.h>

char *my_strlowcase(char *str)
{
    int t = 0;
    while(str[t])
    {
        if(str[t] < 91 && str[t]>64)
        str[t] = str[t] + 32; 
        t++;
    }
    return str;
}