/*
** my_aff_chiffre.c for my_aff_chiffre.c in /home/yanis/debbou_y/my_aff_chiffre
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Mar 20 16:20:18 2017 Debbouza Yanis
** Last update Mon Mar 20 16:30:23 2017 Debbouza Yanis
*/
void	my_putchar(char c);

void	my_aff_chiffre()
{
  char i;

  i = 48;
  while(i != 58)
    {
      my_putchar(i);
      i++;
    }
}
