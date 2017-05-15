#include "ftl.h"
int   random_re(int percent);
void  aff_system_endom(t_ship *op, int nb_random);
void   my_putstr_color(const char *color, const char *str);
char  *my_strdup(char *str);
int   my_strlen(char *str);
void  my_put_nbr(int n);
void  my_putchar(char c);



void	manag_attack_enm(t_ship *op)
{
  int	system_endom;

  if (op->tools->ennemis->present == 1)
    {
      if (random_re(op->tools->evade) == 0)
	my_putstr_color("BBLUE", "l'attaque ennemi nous a manquée\n");
      else
	{
	  op->hull = (op->hull - op->tools->ennemis->ennemis->damage);
	  my_putstr_color("BMAGENTA", "nous avons été touché\n");
	  if (random_re(20) == 0)
	    {
	      system_endom = random_re(3);
	      aff_system_endom(op, system_endom);
	    }
	}
    }
}

void	aff_system_endom(t_ship *op, int nb_random)
{
  if (nb_random == 0)
    {
      my_putstr_color("BRED", "système d'armement touché\n");
      my_putstr_color("BGREN", "Capitaine faite weapon_system_repair\n");
      free(op->weapon->system_state);
      op->weapon->system_state = my_strdup("off");
    }
  else if(nb_random == 1)
    {
      my_putstr_color("BRED", "système ftl drive touché\n");
      my_putstr_color("BGREN", "Capitaine faite ftl_drive_system_repair\n");
      free(op->drive->system_state);
      op->drive->system_state = my_strdup("off");
    }
  else
     {
      my_putstr_color("BRED", "système navigation touché\n");
      my_putstr_color("BGREN", "Capitaine faite navigation_tools_system_repair\n");
      free(op->tools->system_state);
      op->tools->system_state = my_strdup("off");
    }
}

int	check_readline(t_ship *op, char *str)
{
  int	result;

  result = 1;
  if (my_strlen(str) == 0)
    {
      my_putstr_color("BRED", "Capitaine notre lecteur de commande est H.S\n");
      op->tools->ennemis->present = 10;
      result = 0;
    }
  return (result);
}

void	aff_ennemis(t_ennemis *enm)
{
  my_putstr_color("BMAGENTA", "life : ");
  my_put_nbr(enm->life);
  my_putchar('\n');
  my_putstr_color("BMAGENTA", "damage : ");
  my_put_nbr(enm->damage);
  my_putchar('\n');
}