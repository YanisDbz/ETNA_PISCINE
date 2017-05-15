/*
** my_aff_up_params.c for my_aff_up_params.c in /home/yanis/debbou_y/my_aff_up_params
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Mar 27 10:28:04 2017 Debbouza Yanis
** Last update Mon Mar 27 10:52:25 2017 Debbouza Yanis
*/
void	my_putstr(char *str);
void	my_putchar(char c);
char	*my_strupcase(char str[]);

int	main(int argc, char **argv)
{
  int i;

  i = 0;
  while(i != argc)
    {
      my_putstr(my_strupcase(argv[i]));
      my_putchar('\n');
      i++;
    }
  return (0);
}
