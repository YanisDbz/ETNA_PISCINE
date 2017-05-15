/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/yanis/debbou_y/my_str_to_wordtab
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Mar 27 13:44:04 2017 Debbouza Yanis
** Last update Mon Mar 27 21:27:26 2017 Debbouza Yanis
*/
#include "stdlib.h"

char	**my_str_to_wordtab(char *str)
{
  int i;
  int j;
  int k;
  char **tab;

  i = 0;
  j = 0;
  k = 0;
  tab = malloc(sizeof(str) * 100 + 1);
  while(str[j])
  {
    tab[i] = malloc(sizeof(str) * 100 + 1);
    while((str[j] != '\0') && ((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z') || (str[j] >= '0' && str[j] <= '9')))
    {
      tab[i][k] = str[j];
      j++;
      k++;
    }
    while((str[j] != '\0') && !((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z') || (str[j] >= '0' && str[j] <= '9')))
    {
      j++;
    }
    tab[i][k] = '\0';
    i++;
    k++;
    k = 0;
  }
  tab[i] = NULL;
  return(tab);
}
