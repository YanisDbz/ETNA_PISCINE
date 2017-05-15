/*
** my_put_nbr.c for my_put_nbr.c in /home/yanis/debbou_y/my_put_nbr
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Fri Mar 24 09:21:47 2017 Debbouza Yanis
** Last update Sat Mar 25 23:18:47 2017 Debbouza Yanis
*/
void	my_putchar(char c);

void	my_put_nbr(int n)
{
  if (n < 0)
    {
      my_putchar('-');
      my_put_nbr((n / 10) * -1);
      my_putchar(((n / 10) * -1) + '0');
    }
   else
    {
      if (n >= 10)
	my_put_nbr(n / 10);
      my_putchar((n % 10) + '0');
    }
}
