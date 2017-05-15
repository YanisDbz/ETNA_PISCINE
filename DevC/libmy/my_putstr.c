/*
** my_putstr.c for my_putstr.c in /home/yanis/debbou_y/my_putstr
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Wed Mar 22 09:17:34 2017 Debbouza Yanis
** Last update Wed Mar 22 09:22:04 2017 Debbouza Yanis
*/
void	my_putchar(char c);

void	my_putstr(char *str)
{
  int i;

  i = 0;
  while(str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}
