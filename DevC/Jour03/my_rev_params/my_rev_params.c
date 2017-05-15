/*
** my_rev_params.c for my_rev_params.c in /home/yanis/debbou_y/my_rev_params
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Wed Mar 22 17:44:00 2017 Debbouza Yanis
** Last update Wed Mar 22 17:55:21 2017 Debbouza Yanis
*/

void	my_putstr(char *str);
void	my_putchar(char c);

void	my_rev_params(int argc, char **argv)
{
  int	i;

  i = argc - 1;
  while (i > 0)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i --;
    }
}
