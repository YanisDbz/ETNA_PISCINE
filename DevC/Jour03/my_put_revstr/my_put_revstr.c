/*
** my_put_revstr.c for my_put_revstr.c in /home/yanis/debbou_y/my_put_revstr
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Wed Mar 22 14:34:13 2017 Debbouza Yanis
** Last update Wed Mar 22 15:13:18 2017 Debbouza Yanis
*/

void	my_putchar(char c);

void	my_put_revstr(char *str)
{
  int	i;

  i = 0;
  while (*str)
    {
      i++;
      str++;
    }
  while (i >= 0)
    {
      my_putchar(*str);
      i--;
      str--;
    }
}
