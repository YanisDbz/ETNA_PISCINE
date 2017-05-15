/*
** my_str_is_printable.c for my_str_is_printable.c in /home/yanis/debbou_y/my_str_is_printable
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Tue Mar 21 16:17:14 2017 Debbouza Yanis
** Last update Tue Mar 21 18:32:12 2017 Debbouza Yanis
*/
int	my_str_is_printable(char str[])
{
  int i;

  i = 0;
  while(str[i])
    {
      if (str[i] <= 32 || str[i] >= 126)
	{
	  return (0);
	}
      i++;
    }
  return(1);
}
