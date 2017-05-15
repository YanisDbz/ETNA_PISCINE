/*
** my_strlowcase.c for my_strlowcase.c in /home/yanis/debbou_y/my_strlowcase
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Tue Mar 21 12:38:37 2017 Debbouza Yanis
** Last update Tue Mar 21 14:45:48 2017 Debbouza Yanis
*/
char	*my_strlowcase(char str[])
{
  int i;

  i = 0;
  while(str[i])
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	{
	  str[i] = str[i] + 32;
	}
      i++;
    }
  return (str);
}
