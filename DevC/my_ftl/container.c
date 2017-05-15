/*
** container.c for container.c in /home/yanis/debbou_y/my_ftl
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Apr 10 13:56:34 2017 Debbouza Yanis
** Last update Mon Apr 10 13:56:36 2017 Debbouza Yanis
*/
#include "ftl.h"
#include "stdlib.h"

char	*my_strcpy(char *dest, char *src);
int		my_strlen(char *str);
char	*my_strdup(char *str);
void	my_putstr_color(const char *color, const char *str);
int		my_strcmp(char *s1, char *s2);

int		add_container_to_ship(t_ship *op)
{
	t_container *cont;
	str_container_add();

	cont = malloc(sizeof(*cont));
	if (cont == NULL)
	{
		str_container_add_null();
		return 0;
	}
	cont->first = NULL;
	cont->last = NULL;
	cont->nb_elem = 0;
	op->cont = cont;
	str_container_add_success();
	return 1;

}

void	add_freight_to_container(t_ship *op, t_freight *op2)
{
	if (op->cont->first == NULL)
    {
      op->cont->first = op2;
      op->cont->last = op2;
      op->cont->first->next = NULL;
      op->cont->first->prev = NULL;
    }
  else
    {
      op2->next = NULL;
      op2->prev = op->cont->last;
      op->cont->last->next = op2;
      op->cont->last = op2;
    }
  op->cont->nb_elem = op->cont->nb_elem + 1;
}

void	del_freight_from_container(t_ship *op, t_freight *op2)
{

	if (op2 == op->cont->first || op2 == op->cont->last)
	{
		if (op2 == op->cont->first)
		{
			op->cont->first = NULL;
			op->cont->last = NULL;
		}
		else
		{
			op->cont->last = op2->prev;
			op->cont->last->next = NULL;
		}
	}
	else
	{
		op2->prev->next = op2->next;
		op2->next->prev = op2->prev;
	}
	free(op2);
	op->cont->nb_elem = op->cont->nb_elem - 1;
}

void	get_bonus(t_ship *op)
{

	t_freight *check_item;

	check_item = op->cont->first;
	while (check_item != NULL)
	{
		if (my_strcmp(check_item->item, "attackbonus") == 0)
			op->weapon->damage = op->weapon->damage + 5;
		if (my_strcmp(check_item->item, "evadebonus") == 0)
			op->tools->evade = op->tools->evade + 3;
		if (my_strcmp(check_item->item, "energy") == 0)
			op->drive->energy = op->drive->energy + 1;
		check_item = check_item->next;
	}
	check_item = op->cont->last;
	while (check_item != NULL)
	{
		del_freight_from_container(op, check_item);
		check_item = check_item->prev;
	}
}