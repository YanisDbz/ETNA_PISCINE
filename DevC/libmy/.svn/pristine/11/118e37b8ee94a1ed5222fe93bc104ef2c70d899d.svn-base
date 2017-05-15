/*
** my_strcmp.c for my_strcmp.c in /home/yanis/debbou_y/my_strcmp
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Thu Mar 23 14:45:46 2017 Debbouza Yanis
** Last update Thu Mar 23 20:33:05 2017 Debbouza Yanis
*/
int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	tmp;

  i = 0;
  while(s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] > s2[i])
	{
	  tmp = 1;
	  return (tmp);
	}
      else if (s1[i] < s2[i])
	{
	  tmp = - 1;
	  return (tmp);
	}
      else if ((s1[i] == s2[i]) && (s1[i] == '\0' && s2[i] == '\0'))
	{
	  tmp = 0;
	  return (tmp);
	}
      i++;
    }
  return (s1[i] - s2[i]);
}
