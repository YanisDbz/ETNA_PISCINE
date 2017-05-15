/*
** my_next_char.c for my_next_char.c in /home/yanis/debbou_y/my_next_char
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Mar 20 12:33:13 2017 Debbouza Yanis
** Last update Mon Mar 20 12:48:35 2017 Debbouza Yanis
*/
char	my_next_char(char c)
{
  if (( c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y')) 
    {
      c = c + 1;
      return(c);
    }
  else if ( c == 'z')
    return('a');
  else if ( c == 'Z')
    return('A');
  else
    return (' ');
}
