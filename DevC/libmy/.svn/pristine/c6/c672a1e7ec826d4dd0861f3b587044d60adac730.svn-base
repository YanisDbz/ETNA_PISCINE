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
  int   index;

  index = 0;
  while ((s1[index] || s2[index]) && index < n)
    {
      if (s1[index] < s2[index])
        {
          return (-1);
        }
      if (s1[index] > s2[index])
        {
          return (1);
        }
      index++;
    }
  if ((s1[index] < s2[index]) && index < n)
    {
      return (-1);
    }
  if ((s1[index] > s2[index]) && index < n)
    {
      return (1);
    }
  return (0);
}
