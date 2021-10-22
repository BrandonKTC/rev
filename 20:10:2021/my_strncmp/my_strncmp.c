/*
** ETNA PROJECT, 21/10/2021 by kwamou_b
** my_strncmpy
** File description:
**      string
*/

int my_strncmp(const char *s1, const char *s2, int n)
{
    int i=0;

    while ((s1[i] && i<n) || (s2[i] && i<n))
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
