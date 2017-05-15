/*
** my_strcat.c for my_strcat.c in /home/yanis/debbou_y/my_strcat
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Thu Mar 23 20:48:33 2017 Debbouza Yanis
** Last update Thu Mar 23 22:08:09 2017 Debbouza Yanis
*/
char	*my_strcat(char *dest, char *src)
{
  int i;
  int j;

  j = 0;
  i = 0;
  while (dest[i])
    {
      i++;
    }
  while (src[j])
    {
      dest[i] = src[j];
      j++;
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
