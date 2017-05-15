/*
** my_strchr.c for my_strchr.c in /home/yanis/debbou_y/my_strchr
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Wed Mar 22 09:34:56 2017 Debbouza Yanis
** Last update Wed Mar 22 12:16:55 2017 Debbouza Yanis
*/
char*	my_strchr(char *str, int c)
{
  int i;

  i = 0;
  while (str[i])
    {
      if (str[i] == c)
	return (&str[i]);
      i++;
    }
  return ("\0");
}
