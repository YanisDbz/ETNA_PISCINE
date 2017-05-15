#ifndef		__FTL_H__
# define	__FTL_H__

#include "stdlib.h"
#include "stdio.h"
#include "unistd.h"

#define str_container_add() my_putstr_color("BBLUE", "ajout du container en cours...\n");
#define str_container_add_null() my_putstr_color("BRED", "votre vaisseau a explose lorsque vous avez pose le container\n");
#define str_container_add_success() my_putstr_color("BGREEN", "le container a ete ajoute avec succes!\n");
#define ftl_check() my_putstr_color("BBLUE", "verification du reacteur en cours...\n");
#define ftl_check_ok() my_putstr_color("BGREEN", "reacteur OK!\n");
#define ftl_check_fail() my_putstr_color("BRED", "reacteur hors service!\n");
#define navigation_check() my_putstr_color("BBLUE", "verification du systeme de navigation en cours...\n");
#define navigation_check_ok() my_putstr_color("BGREEN", "systeme de navigation OK!\n");
#define navigation_check_fail() my_putstr_color("BRED", "systeme de navigation hors service!\n");
#define weapon_check() my_putstr_color("BBLUE", "verification du systeme d'armement en cours...\n");
#define weapon_check_ok() my_putstr_color("BGREEN", "systeme d'armement OK!\n");
#define weapon_check_fail() my_putstr_color("BRED", "ysteme d'armement hors service!\n");
#define create_ship_aff_fail() my_putstr_color("BRED", "le vaisseau n'a pas pu etre construit par manque de materiaux\n");
#define add_weapon_fail() my_putstr_color("BRED", "votre vaisseau a explose quand vous avez tente d'ajouter les armes\n");
#define add_ftl_fail() my_putstr_color("BRED", "votre vaisseau a explose lorsque vous avez pose le reacteur\n");
#define add_ftl_success() my_putstr_color("BGREEN", "les outils de navigations ont ete ajoutes avec succes!\n");
#define repair_navigation_fail() my_putstr_color("BRED", "les reparations des outils de navigations ont echoue\n");
#define repair_weapon_fail() my_putstr_color("BRED", "les reparations du systeme d'armement ont echoue\n");


typedef struct	s_ship
{
  int	hull;
  struct s_weapon *weapon;
  struct s_ftl_drive *drive;
  struct s_navigation_tools *tools;
  struct s_container *cont;

}		t_ship;

typedef struct	s_weapon
{
  char	*system_state;
  int	damage;
}		t_weapon;

typedef struct 	s_ftl_drive
{
	char	*system_state;
	int		energy;
	
}		t_ftl_drive;

typedef struct s_navigation_tools
{
	char	*system_state;
	int		sector;
	int		evade;
	int 	detect;
	struct s_ennemis_present *ennemis;

}		t_navigation_tools;

typedef struct s_freight
{
	char 	*item;
	struct s_freight 	*next;
	struct s_freight 	*prev;

}		t_freight;

typedef struct s_container
{
	struct s_freight 	*first;
	struct s_freight	*last;
	int		nb_elem;

}		t_container;

typedef struct s_repair_command
{
	char	*command;
	void	(*funct)(t_ship *op);

}		t_repair_command;


typedef struct	s_ennemis
{
  int				damage;
  int				life;
}		t_ennemis;

typedef struct s_ennemis_present
{	
	struct s_ennemis *ennemis;
	int present;
	int nb_elem;
}		t_ennemis_present;

#endif