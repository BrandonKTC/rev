/*
** ETNA PROJECT, 21/10/2021 by kwamou_b
** my_strupcase
** File description:
**      string
*/

char *my_strupcase(char *str)
{
    int t = 0;
    while(str[t])
    {
        if(str[t] > 96)
        str[t] = str[t] - 32; 
        t++;
    }
    return str;
}