/*
** air_shed.c for air_shed.c in /home/yanis/debbou_y/my_ftl
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Apr 10 09:43:48 2017 Debbouza Yanis
** Last update Mon Apr 10 09:43:51 2017 Debbouza Yanis
*/
#include "ftl.h"
#include "stdlib.h"
#include "stdio.h"

char	*my_strcpy(char *dest, char *src);
int		my_strlen(char *str);
char	*my_strdup(char *str);
void	my_putstr_color(const char *color, const char *str);
int		add_container_to_ship(t_ship *op);
void	ftl_drive_system_check(t_ship *op);
void	navigation_tools_system_check(t_ship *op);
void	weapon_system_check(t_ship *op);
int		check_system(t_ship *check);
int		repair_systeme_main(t_ship *check);

t_ship		*create_ship()
{
	my_putstr_color("BBLUE", "construction du vaisseau en cours...\n");
	t_ship *hull;
	t_ship *t_weapon;
	t_ship *t_ftl_drive;
	t_ship *t_navigation_tools;
	t_ship *t_container;

	if ((hull = 0) && (t_weapon = 0) && (t_ftl_drive = 0) &&
		(t_navigation_tools = 0) && (t_container = 0))
		my_putstr_color("BRED", "NSM LES WARNING TA MERE\n");
	hull = NULL;
	t_weapon = NULL;
	t_ftl_drive = NULL;
	t_navigation_tools = NULL;
	t_container = NULL;
	hull = malloc(sizeof(*hull));
	if (hull == NULL)
	{
		create_ship_aff_fail()
		return NULL;
	}
	my_putstr_color("BGREEN", "amelioration du vaisseau termine!\n");
	return hull;
}

int		add_weapon_to_ship(t_ship *op)
{
	t_weapon *weapon;

	my_putstr_color("BBLUE", "ajout des armes en cours...\n");
	weapon = malloc(sizeof(*weapon));
	if (weapon == NULL)
	{
		add_weapon_fail();
		return 0;
	}
	weapon->damage = 10;
	weapon->system_state = my_strdup("online");
	op->weapon = weapon;
	my_putstr_color("BGREEN", "les armes on ete ajoutes avec succes!\n");
	return 1;

}

int		add_ftl_drive_to_ship(t_ship *op)
{
	t_ftl_drive *drive;

	my_putstr_color("BBLUE", "ajout du reacteur en cours...\n");
	drive = malloc(sizeof(*drive));
	if (drive == NULL)
	{
		add_ftl_fail();
		return 0;
	}
	drive->energy = 10;
	drive->system_state = my_strdup("online");
	op->drive = drive;
	my_putstr_color("BGREEN", "le reacteur a ete ajoute avec succes!\n");
	return 1;
}

int		add_navigation_tools_to_ship(t_ship *op)
{
	t_navigation_tools *tools;
	t_ennemis_present *ennemis;

	my_putstr_color("BBLUE", "ajout des outils de navigations...\n");
	tools = malloc(sizeof(*tools));
	ennemis = malloc(sizeof(*ennemis));
	if (tools == NULL)
	{
		add_ftl_fail();
		return 0;
	}
	else if(ennemis == NULL)
	{
		return 0;
	}
  	ennemis->ennemis = NULL;
  	ennemis->nb_elem = 0;
  	ennemis->present = 0;
  	tools->sector = 0;
  	tools->evade = 25;
  	tools->detect = 0;
  	tools->system_state = my_strdup("online");
  	tools->ennemis = ennemis;
  	op->tools = tools;	
	add_ftl_success();
	return 1;
}