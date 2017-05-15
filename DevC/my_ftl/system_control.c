/*
** system_control.c for system_control.c in /home/yanis/debbou_y
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Tue Apr 11 10:21:47 2017 Debbouza Yanis
** Last update Tue Apr 11 10:21:48 2017 Debbouza Yanis
*/
#include "ftl.h"

char	*my_strcpy(char *dest, char *src);
int		my_strlen(char *str);
char	*my_strdup(char *str);
void	my_putstr_color(const char *color, const char *str);
int		my_strcmp(char *s1, char *s2);

void	ftl_drive_system_check(t_ship *op)
{
	ftl_check();
	if (my_strcmp(op->drive->system_state, "online") == 0)
	{
		ftl_check_ok();
	}
	else
		ftl_check_fail();
}

void	navigation_tools_system_check(t_ship *op)
{
	navigation_check();
	if (my_strcmp(op->tools->system_state, "online") == 0)
	{
		navigation_check_ok();
	}
	else
		navigation_check_fail();
}

void	weapon_system_check(t_ship *op)
{
	weapon_check();
	if (my_strcmp(op->weapon->system_state, "online") == 0)
	{
		weapon_check_ok();
	}
	else
		weapon_check_fail();
}

int		check_system(t_ship *check)
{
	navigation_tools_system_check(check);
	ftl_drive_system_check(check);
	weapon_system_check(check);
	return 0;
}