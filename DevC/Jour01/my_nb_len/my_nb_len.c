/*
** my_nb_len.c for my_nb_len.c in /home/yanis/debbou_y/my_nb_len
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Mar 20 16:52:49 2017 Debbouza Yanis
** Last update Mon Mar 20 18:56:30 2017 Debbouza Yanis
*/
int	my_nb_len(int n)
{
  int result;

  result = 1;
  if (n < 0)
    {
      n = n*-1;
    }
  while (n > 10)
    {
      n = n/10;
      result++;
    }
  return(result);
}
