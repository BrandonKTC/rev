/*
** ETNA PROJECT, 21/10/2021 by kwamou_b
** my_strcmpy
** File description:
**      string
*/
#include <unistd.h>

int my_strcmp(const char *s1, const char *s2)
{
    int i=0;
    while (s1[i] || s2[i])
    {
        if (s1[i] != s2[i])
        {
            int x = s1[i] - s2[i];
            return x;
        }
        i++;
    }
    return 0;
}