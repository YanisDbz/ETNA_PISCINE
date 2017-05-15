/*
** my_strdup.c for my_strdup.c in /home/yanis/debbou_y/my_strdup
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Mar 27 11:15:38 2017 Debbouza Yanis
** Last update Mon Mar 27 13:38:23 2017 Debbouza Yanis
*/
#include "stdlib.h"
char	*my_strcpy(char *dest, char *src);
int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  char *str2;
  int i;

  i = my_strlen(str);
  str2 = malloc(i);
  if (str2 == 0)
    {
      return (0);
    }
  my_strcpy(str2, str);
  return (str2);
  free (str2);
}
