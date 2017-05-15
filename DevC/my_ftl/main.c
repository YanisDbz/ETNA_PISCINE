/*
** main.c for main.c in /home/yanis/debbou_y/my_ftl
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Wed Apr 12 11:04:50 2017 Debbouza Yanis
** Last update Wed Apr 12 16:16:10 2017 Debbouza Yanis
*/
#include "ftl.h"

t_ship		*create_ship();
int		add_weapon_to_ship(t_ship *op);
int		add_ftl_drive_to_ship(t_ship *op);
int		add_navigation_tools_to_ship(t_ship *op);
int		add_container_to_ship(t_ship *op);
void	my_putstr_color(const char *color, const char *str);
void	system_repair(t_ship *op);
void	create_ennemis(t_ship *og);
void	game_main(t_ship *op);
void	real_ship();
void	game();


int main()
{
	t_ship *ship;
	int weapon;
	int drive;
	int tools;
	int cont;
	int aff;
	/*int check;*/
	/*int repair;*/

	ship = create_ship();
	weapon = add_weapon_to_ship(ship);
	drive = add_ftl_drive_to_ship(ship);
	tools = add_navigation_tools_to_ship(ship);
	cont = add_container_to_ship(ship);
	real_ship(ship);
	game(ship);
	/*system_repair(ship);*/
	/*check = check_system(ship);*/
	/*repair = repair_systeme_main(ship);*/
	if ((ship = 0) && (weapon = 0) && (drive = 0)
	&& (tools = 0) && (cont = 0) && (aff = 0)/* && (check = 0) && (repair == 0)*/)
	{
		my_putstr_color("BRED", "NSM LES WARNING\n");
	}
	return 0;

}
