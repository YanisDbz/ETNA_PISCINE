/*
** my_aff_alpha.c for my_rev_alpha.c in /home/yanis/debbou_y/my_rev_alpha
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Mar 20 16:01:57 2017 Debbouza Yanis
** Last update Mon Mar 20 16:02:35 2017 Debbouza Yanis
*/

void	my_putchar(char c);

void	my_rev_alpha()
{
  char i;

  i = 'z';
  while( i != 96)
    {
      my_putchar(i);
      i--;
    }
}
