/*
** system_repair.c for system_repair.c in /home/yanis/debbou_y/my_ftl
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Tue Apr 11 11:05:01 2017 Debbouza Yanis
** Last update Tue Apr 11 11:05:03 2017 Debbouza Yanis
*/
#include "ftl.h"

char	*my_strcpy(char *dest, char *src);
int		my_strlen(char *str);
char	*my_strdup(char *str);
void	my_putstr_color(const char *color, const char *str);
int		my_strcmp(char *s1, char *s2);
char  	*readLine();
void	my_putchar(char c);
t_ship		*create_ship();

void	ftl_drive_system_repair(t_ship *op)
{
	my_putstr_color("BBLUE", "reparation du reacteur en cours...\n");
	free(op->tools->system_state);
	op->drive->system_state = my_strdup("online");
	if (op->drive->system_state != NULL)
	{
		my_putstr_color("BGREEN", "reparation termine! systeme reacteur OK!\n");
	}
	else
	{
		my_putstr_color("BRED", "les reparations du reacteur ont echoue\n");
	}
}

void	navigation_tools_system_repair(t_ship *op)
{
	my_putstr_color("BBLUE", "reparation du systeme de navigation en cours...\n");
	free(op->tools->system_state);
	op->tools->system_state = my_strdup("online");
	if (op->tools->system_state != NULL)
	{
		my_putstr_color("BGREEN", "reparation termine! systeme de navigation OK!\n");
	}
	else
		repair_navigation_fail();
}

void	weapon_system_repair(t_ship *op)
{
	my_putstr_color("BBLUE", "reparation du systeme d'armement en cours...\n");
	free(op->weapon->system_state);
	op->weapon->system_state = my_strdup("online");
	if (op->weapon->system_state != NULL)
	{
		my_putstr_color("BGREEN", "reparation termine! systeme d'armement OK!\n");
	}
	else
		repair_weapon_fail();
}

static const t_repair_command tab[] =
{
	{"ftl_drive", ftl_drive_system_repair},
	{"navigation_tools", navigation_tools_system_repair},
	{"weapon", weapon_system_repair},
	{NULL, NULL}
};

void	system_repair(t_ship *op)
{
	char *entree;
	int i;
	int result;

	result = 1;
	i = 0;
	my_putstr_color("BYELLOW", "\nRepair_system~> ");
	entree = readLine();
	while (tab[i].command != NULL)
	{
		if (my_strcmp(tab[i].command,  entree) == 0)
		{
			tab[i].funct(op);
			result = 0;
		}
		i++;
	}
	if (result == 1)
			my_putstr_color("BRED", "[SYSTEM FAILURE] : commande inconnue\n");
}

/*int		repair_systeme_main(t_ship *check)
{
	ftl_drive_system_repair(check);
	navigation_tools_system_repair(check);
	weapon_system_repair(check);
	return 0;
}*/