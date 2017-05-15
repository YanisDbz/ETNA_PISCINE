/*
** my_aff_tab_num.c for my_aff_tab_num.c in /home/yanis/debbou_y/my_aff_tab_num
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Tue Mar 21 10:11:33 2017 Debbouza Yanis
** Last update Tue Mar 21 10:27:42 2017 Debbouza Yanis
*/
void	my_putchar(char c);

void	my_aff_tab_num(int tab[], int size)
{
  int i;

  i = 0;
  while(i < size)
    {
      my_putchar(tab[i] + 48);
      my_putchar('\n');
      i++;
    }
}
