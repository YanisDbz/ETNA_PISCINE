/*
** my_find_node_elm_eq_in_list.h for my_find_node_elm_eq_in_list.c in /home/yanis/debbou_y/my_find_node_elm_eq_in_list
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Thu Mar 30 14:00:18 2017 Debbouza Yanis
** Last update Thu Mar 30 18:37:32 2017 Debbouza Yanis
*/
#include "my_list.h"
#include "stdlib.h"

t_list  *my_find_node_elm_eq_in_list(t_list *begin,void *data_ref,int (*cmp)())
{
  t_list	*list_ptr;

  list_ptr = begin;
  while (list_ptr != 0)
    {
      if (cmp(list_ptr->data,data_ref) == 0)
	return (list_ptr->data);
      list_ptr = list_ptr->next;
    }
  return (0);
}
