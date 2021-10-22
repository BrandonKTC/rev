/*
** ETNA PROJECT, 21/10/2021 by kwamou_b
** my_strlowercase.c
** File description:
**      string
*/

char *my_strlowcase(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return str;
}