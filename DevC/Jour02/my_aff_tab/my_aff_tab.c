/*
** my_aff_tab.c for my_aff_tab.c in /home/yanis/debbou_y/my_aff_tab
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Tue Mar 21 09:39:16 2017 Debbouza Yanis
** Last update Tue Mar 21 10:04:29 2017 Debbouza Yanis
*/
void	my_putchar(char c);

void	my_aff_tab(char str[])
{
  int i;

  i = 0;
  while(str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}
