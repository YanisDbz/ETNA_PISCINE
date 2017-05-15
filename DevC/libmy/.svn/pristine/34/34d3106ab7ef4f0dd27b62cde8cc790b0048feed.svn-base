/*
** my_getnbr.c for my_getnbr.c in /home/yanis/debbou_y/my_get_nbr
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Fri Mar 24 13:39:54 2017 Debbouza Yanis
** Last update Fri Mar 24 22:00:59 2017 Debbouza Yanis
*/
#include <unistd.h>

int str_number_pos(char *str)
{
  int signe;
  int pos;

  signe = 1;
  pos = 0;
  while(str[pos] == '+' || str[pos] == '-')
    {
      if (str[pos] == '-')
{
 signe = signe * -1;
}
      pos = pos + 1;
    }
  return (signe * pos);
}

int my_getnbr(char *str)
{
  int nbr;
  int signe;
  int first_number;

  nbr = 0;
  signe = 1;
  first_number = str_number_pos(str);
  if (first_number < 0)
    {
      first_number = first_number * -1;
      signe = -1;
    }
  str = str + first_number;
  while (*str >= '0' && *str <= '9')
    {
      nbr = nbr * 10;
      nbr = nbr + (*str - '0');
      str = str + 1;
    }
  return (nbr * signe);
}