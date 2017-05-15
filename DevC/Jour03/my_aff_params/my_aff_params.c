/*
** my_aff_params.c for my_aff_params.c in /home/yanis/debbou_y/my_aff_params
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Wed Mar 22 17:12:39 2017 Debbouza Yanis
** Last update Wed Mar 22 17:38:53 2017 Debbouza Yanis
*/
void	my_putstr(char *str);
void	my_putchar(char c);

void	my_aff_params(int argc, char **argv)
{
  int	i;

  i = 0;
  while (i != argc)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i++;
    }
}
    
