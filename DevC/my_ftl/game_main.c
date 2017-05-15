#include "ftl.h"

void      game(t_ship *op);
void      my_putstr_color(const char *color, const char *str);
t_ship    *create_ship();


void	game_main(t_ship *op)
{
  int	win;
  int	i;

  i = 0;
  win = 0;
  while (op->tools->sector < 10 && win == 0)
    {
      game(op);
      i++;
      if ((op->hull <= 0) || (op->drive->energy <= 0))
	win = 1;
    }
  if (win == 1)
    {
      if (op->hull <= 0)
	my_putstr_color("BRED", "Capitaine nous n'avons plus de vie !\n");
      else if (op->drive->energy <= 0)
	my_putstr_color("BRED", "Capitaine nous n'avons plus d'énéergie !\n");
      my_putstr_color("rBRED", "C'est fini GAME OVEEEEEEEER HAHA T NUL\n");
    }
  else if (op->tools->ennemis->life == 0  && win != 1)
      my_putstr_color("BGREN", "Monsieur Sparrow nous avons reussi. Direction Tortuga !\n");
}
int main()
{
  t_ship *ship;

  ship = create_ship();
  game_main(ship);
  return 0;

}