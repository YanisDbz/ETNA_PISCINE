/*
** my_trspos_tab.c for my_trspos_tab.c in /home/yanis/debbou_y/my_trspos_tab
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Wed Mar 22 16:05:29 2017 Debbouza Yanis
** Last update Wed Mar 22 17:07:54 2017 Debbouza Yanis
*/
void	my_putchar(char c);

void	my_trspos_tab(int c, int l, int tab[l][c])
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (i < c)
    {
      j = 0;
      while (j < l)
	{
	  my_putchar((tab[j][i]) + 48);
	  j++;
	}
      i++;
      my_putchar('\n');
    }
}
