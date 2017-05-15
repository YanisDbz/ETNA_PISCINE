/*
** my_params_in_list.c for my_params_in_list.c in /home/yanis/debbou_y/my_params_in_list
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Wed Mar 29 09:41:30 2017 Debbouza Yanis
** Last update Wed Mar 29 14:31:45 2017 Debbouza Yanis
*/
#include "stdlib.h"
#include "my_list.h"

t_list* add_item(void* data, t_list* list)
{
	t_list* link;

	link = malloc(sizeof(t_list));
	link->data = data;
	link->next = list;
	return (link);
}
t_list  *my_params_in_list(int argc, char **argv)
{
  t_list *list;
  int i;
  
  i = 0;
  list = NULL;
  while (i < argc)
    {
      list = add_item(argv[i], list);
      i++;
    }
  return (list);
}
