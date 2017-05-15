/*
** my_strupcase.c for my_strupcase.c in /home/yanis/debbou_y/my_strupcase
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Tue Mar 21 14:19:57 2017 Debbouza Yanis
** Last update Tue Mar 21 14:50:37 2017 Debbouza Yanis
*/
char	*my_strupcase(char str[])
{
  int i;

  i = 0;
  while(str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  str[i] = str[i] - 32;
	}
      i++;
    }
  return (str);
}
