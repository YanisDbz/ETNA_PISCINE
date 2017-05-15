/*
** my_aff_comb.c for my_aff_comb.c in /home/yanis/debbou_y/my_aff_comb
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Mar 20 19:18:16 2017 Debbouza Yanis
** Last update Mon Mar 20 21:53:14 2017 Debbouza Yanis
*/
void	my_putchar(char c);

void	my_aff_comb()
{
  char	nbr1;
  char	nbr2;
  char	nbr3;
  
  nbr1 = '0';
  nbr2 = '1';
  nbr3 = '2';
  while (nbr1 <= '7')
    {
      my_putchar(nbr1);
      my_putchar(nbr2);
      my_putchar(nbr3);
      my_putchar(',');
      my_putchar(' ');    
	if (nbr3 >= '9')
	  nbr2 = nbr2 + 1;
	if (nbr2 >= '8')
	    nbr1 = nbr1 + 1;
	if (nbr2 >= '8')
	    nbr2 = nbr1 + 1;
	nbr3 = nbr3 + 1;
	if (nbr3 > '9')
	  nbr3 = nbr2 + 1;
    }
  my_putchar(8);
  my_putchar(8);
}
