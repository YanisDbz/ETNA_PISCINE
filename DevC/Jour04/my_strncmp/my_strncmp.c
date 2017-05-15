/*
** my_strcmp.c for my_strncmp.c in /home/yanis/debbou_y/my_strncmp
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Thu Mar 23 17:35:21 2017 Debbouza Yanis
** Last update Thu Mar 23 20:32:10 2017 Debbouza Yanis
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	tmp;

  i = 0;
  while(s1[i] != '\0' || s2[i] != '\0' || i < n)
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
      else if ((s1[i] == s2[i]) && (s1[i] == '\0' && s2[i] == '\0' && i < n))
	{
	  tmp = 0;
	  return (tmp);
	}
      i++;
    }
  return (s1[i] - s2[i]);
}
