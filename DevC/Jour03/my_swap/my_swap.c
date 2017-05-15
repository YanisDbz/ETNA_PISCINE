/*
** my_swap.c for my_swap.c in /home/yanis/debbou_y/my_swap
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Wed Mar 22 12:25:32 2017 Debbouza Yanis
** Last update Wed Mar 22 12:48:57 2017 Debbouza Yanis
*/
void	my_swap(int *a, int *b)
{
  int chng;

  chng = *a;
  *a = *b;
  *b = chng;
}
  
