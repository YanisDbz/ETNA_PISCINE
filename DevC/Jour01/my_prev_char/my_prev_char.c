/*
** my_prev_char.c for my_prev_char.c in /home/yanis/debbou_y/my_prev_char
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Mar 20 12:57:18 2017 Debbouza Yanis
** Last update Mon Mar 20 12:58:30 2017 Debbouza Yanis
*/

char	my_prev_char(char c)
{
  if (( c >= 'b' && c <= 'z') || (c >= 'B' && c <= 'Z')) 
    {
      c = c - 1;
      return(c);
    }
  else if ( c == 'a')
    return('z');
  else if ( c == 'A')
    return('z');
  else
    return (' ');
}
