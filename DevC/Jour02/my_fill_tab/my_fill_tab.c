/*
** my_fill_tab.c for my_fill_tab.h in /home/yanis/debbou_y/my_fill_tab
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Tue Mar 21 11:55:01 2017 Debbouza Yanis
** Last update Tue Mar 21 12:28:59 2017 Debbouza Yanis
*/
void	my_putchar(char c);

int	*my_fill_tab()
{
  static int t[100];
  int i;

  i = 0;
  while(i <= 99)
    {
      t[i] = i + 1;
      i++;
    }
  return (t);
}
