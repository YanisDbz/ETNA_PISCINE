/*
** my_strncat.c for my_strncat.c in /home/yanis/debbou_y/my_strncat
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Thu Mar 23 22:20:59 2017 Debbouza Yanis
** Last update Thu Mar 23 23:20:02 2017 Debbouza Yanis
*/
char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i])
    i++;
  while (src[j] && j < n)
    {
      dest[i] = src[j];
      j++;
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
