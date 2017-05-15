/*
** my_list_size.c for my_list_size.h in /home/yanis/debbou_y/my_list_size
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Wed Mar 29 15:17:56 2017 Debbouza Yanis
** Last update Wed Mar 29 15:39:33 2017 Debbouza Yanis
*/
#include "my_list.h"
#include "stdlib.h"

int	my_list_size(t_list *begin)
{
  int	cpt;
  t_list*	liste;

  liste = begin;
  cpt = 0;
  while(liste != NULL)
    {
      liste = liste->next;
      cpt++;
    }
  return (cpt);
}
