/*
** my_params_to_tab.c for my_params_to_tab.c in /home/yanis/debbou_y/my_params_to_tab
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Tue Mar 28 09:59:34 2017 Debbouza Yanis
** Last update Tue Mar 28 17:08:57 2017 Debbouza Yanis
*/
#include <stdlib.h>

struct s_stock_par
{
  int	size_param;
  char	*str;
  char	*copy;
  char	**tab;
};
char	**my_str_to_wordtab(char *str);
char	*my_strdup(char *str);
int	my_strlen(char *str);

struct	s_stock_par	*my_params_to_tab(int ac, char **av)
{
  struct s_stock_par *stock;
  stock = malloc(sizeof(struct s_stock_par) * (ac + 1));
  int i;

  i = 0;
  while(i < ac)
  {
    stock[i].size_param = my_strlen(av[i]);
    stock[i].str = av[i];
    stock[i].copy = my_strdup(av[i]);
    stock[i].tab = my_str_to_wordtab(av[i]);
    i++;
  }
  stock[i].str = '\0';
  return (stock);
}
