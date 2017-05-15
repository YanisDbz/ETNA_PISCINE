/*
** my_strlen.c for my_strlen.c in /home/yanis/debbou_y/my_strlen
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Wed Mar 22 09:24:01 2017 Debbouza Yanis
** Last update Wed Mar 22 09:26:38 2017 Debbouza Yanis
*/
int	my_strlen(char *str)
{
  int i;

  i = 0;
  while(str[i])
    {
      i++;
    }
  return (i);
}
