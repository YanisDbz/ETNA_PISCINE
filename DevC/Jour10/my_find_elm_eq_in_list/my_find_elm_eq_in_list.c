/*
** my_find_elm_eq_in_list.c for my_find_elm_eq_in_list.c in /home/yanis/debbou_y/my_find_elm_eq_in_list
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Thu Mar 30 09:56:34 2017 Debbouza Yanis
** Last update Thu Mar 30 15:11:11 2017 Debbouza Yanis
*/
#include "my_list.h"
#include "stdlib.h"
#include "stdio.h"

void	*my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  while (begin != NULL)
    {
      if (cmp(begin->data, data_ref) == 0)
	{
	  return (begin->data);
	  begin = begin->next;
	}
    }
  return (0);
}
