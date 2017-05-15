/*
** my_put_nbr.c for my_put_nbr.c in /home/yanis/debbou_y/my_put_nbr
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Fri Mar 24 09:21:47 2017 Debbouza Yanis
** Last update Fri Mar 24 13:34:52 2017 Debbouza Yanis
*/
void	my_putchar(char c);

void	my_put_nbr(int n)
{
  int div;
  int i;
  
  div = 1;
  if (n < 0)
  {
  	n = -n;
  	my_putchar('-');
  }
  while ((n/div) >9)
   {
   	div = div* 10;
   }
   while(div != 0)
   {
   	i = n / div;
   	n = n % div;
   	my_putchar(i +'0');
   	div = div / 10;
   }
}
