/*
** my_put_nbr.c for my_put_nbr.c in /home/yanis/debbou_y/my_put_nbr
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Fri Mar 24 09:21:47 2017 Debbouza Yanis
** Last update Sat Mar 25 23:18:47 2017 Debbouza Yanis
*/
void    my_putchar(char c);

void    my_put_nbr(int nb)
{
  int	number;

  number = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
        {
          number = 1;
          nb++;
        }
      nb = nb * -1;
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  if (number == 1)
    {
      number = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    {
      my_putchar(nb % 10 + '0');
    }
}