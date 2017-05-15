/*
** game_boucle.c for game_boucle.c in /home/yanis/debbou_y/my_ftl
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Wed Apr 12 16:18:53 2017 Debbouza Yanis
** Last update Wed Apr 12 16:19:00 2017 Debbouza Yanis
*/

#include "ftl.h"

char  *my_strcpy(char *dest, char *src);
int   my_strlen(char *str);
char  *my_strdup(char *str);
void  my_putstr_color(const char *color, const char *str);
int   my_strcmp(char *s1, char *s2);
int   random_re(int percent);
void  my_put_nbr(int n);
char    *readLine();
void      create_ennemis(t_ship *op);
void  my_putchar(char c);
void  aff_ennemis(t_ennemis *enm);
int check_readline(t_ship *op, char *str);
void  manag_attack_enm(t_ship *op);

void attack_ship(t_ship *op)
{
  int nb_energy_lost;

  nb_energy_lost = 0;
  if (op->tools->ennemis->present == 0)
    my_putstr_color("BRED", "Aucun ennemis a l'horizon Capitaine!\n");
  else
    {
      if (my_strcmp(op->weapon->system_state, "online") == 0)
  {
    op->tools->ennemis->ennemis->life = op->tools->ennemis->ennemis->life - op->weapon->damage;
    aff_ennemis(op->tools->ennemis->ennemis);
    nb_energy_lost = nb_energy_lost + random_re(50);
  }
      else
  my_putstr_color("BRED", "Systemet d'armement endommagé\n");
    }
  if ((op->tools->ennemis->present) &&
      (op->tools->ennemis->ennemis->life <= 0))
    {
      op->tools->ennemis->present = 0;
      my_putstr_color("BGREEN", "Capitaine l'ennemi est abattu!\n");
      op->drive->energy = op->drive->energy - nb_energy_lost;
      my_putstr_color("BCYAN", "Capitaine nous avons perdu ");
      my_put_nbr(nb_energy_lost);
      my_putstr_color("BCYAN", " cellules d'énergie durant ce combat\n");
      my_putstr_color("BCYAN", "Notre energie est de ");
      my_put_nbr(op->drive->energy);
      my_putchar('\n');

    }
}

void jump_ship(t_ship *op)
{
  if (my_strcmp(op->drive->system_state, "online") == 0)
    {
      if (op->tools->ennemis->present == 0)
      {
         int  ennemi;

         my_putstr_color("BYELLOW","Nous avacons capitaine nous sommes au secteur \n");
         my_put_nbr(op->tools->sector);
         my_putchar('\n');
         op->tools->sector = op->tools->sector + 1;
         op->drive->energy = op->drive->energy - 1;
         op->tools->detect = 0;
         ennemi = random_re(30);
         if (ennemi != 0)
          create_ennemis(op);
      }
       else if (op->tools->ennemis->present != 0)
        my_putstr_color("BRED", "Un ennemi est present capitaine!\n");
    }
  else
    my_putstr_color("BRED", "Systeme de navigation endommagé\n");
}

void  detect_ship()
{
  my_putstr_color("BRED", "La commande n'a pu etre terminé ... elle n'est pas fonctionnel :'(\n");
}
void  ftl_drive_system_repair(t_ship *op)
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

void  navigation_tools_system_repair(t_ship *op)
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

void  weapon_system_repair(t_ship *op)
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


static const t_repair_command   game_command[] =
  {
    {"attack", attack_ship},
    {"jump", jump_ship},
    {"detect", detect_ship},
    {"system_repair_drive", ftl_drive_system_repair},
    {"system_repair_tools", navigation_tools_system_repair},
    {"system_repair_weapon", weapon_system_repair},
    {NULL, NULL}
  };
  
void  game(t_ship *op)
{
  char  *answer;
  char  *trouve;
  int i;

  i = 0;
  trouve = "False";
  while(op->tools->sector < 10 || op->drive->energy == 0)
  {
    my_putstr_color("BOLD", "\n$Capitaines Sparrow nous attendons vos ordres ! ");
    answer = readLine();
        while (game_command[i].command != NULL)
        {
          if ((my_strcmp(game_command[i].command, answer) == 0))
          {
            manag_attack_enm(op);
            game_command[i].funct(op);
            trouve = "True";
          }
          i++;
        }
        if (my_strcmp(trouve, "False") == 0)
          my_putstr_color("BRED", "Je connais pas cette commande ...\n");
        my_putstr_color("BGREEN", "Jump, Attack, Detect sont les commandes opérationnels\n");
        game(op);
    }
  }


void      create_ennemis(t_ship *op)
{
  t_ennemis   *enm;
  int     life;
  int     damage;

  damage = 10 * ((0.5 * op->tools->ennemis->nb_elem) + 1);
  life = 20 * ((0.5 * op->tools->ennemis->nb_elem) + 1);
  enm = malloc(sizeof(*enm));
  if (enm != 0)
    {
      my_putstr_color("BRED", "Un ennemi droit devant capitaine ! ");
      my_putstr_color("BRED", "il nous attaque !\n");
      enm->damage = damage;
      enm->life = life;
      op->tools->ennemis->ennemis = enm;
      op->tools->ennemis->nb_elem++;
      op->tools->ennemis->present = 1;
      aff_ennemis(enm);
    }
}