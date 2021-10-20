/*
** ETNA PROJECT, 20/10/2021 by kwamou_b
** my_getnbr
** File description:
**      return number in argument
*/
#include <unistd.h>

// int my_getnbr(const char *str) {
//  int i = 0;
//  int result = 0;

//  if (str[i] == '-' || str[i] == '+')
//    i++;
//  while ((str[i] >= '0') && (str[i] <= '9')) {
//   result = (result * 10) + (str[i] - '0');
//   i++;
//  }
//  if (str[0] == '-')
//    result = result * (-1);
//  return result;
// }

int main() {
 my_getnbr("+−−−+−−++−−−+−−−+−−−+−42");
 return 0;
}