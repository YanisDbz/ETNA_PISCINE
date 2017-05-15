/*
** my_tablen.c for my_tablen.c in /home/yanis/debbou_y/my_tablen
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Tue Mar 21 11:03:41 2017 Debbouza Yanis
** Last update Tue Mar 21 11:10:45 2017 Debbouza Yanis
*/
int	my_tablen(char tab[])
{
  int i;

  i = 0;
  while(tab[i])
    {
      i++;
    }
  return(i);
}
