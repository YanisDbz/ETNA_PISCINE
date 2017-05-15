/*
** my_putchar.c for my_putchar.c in /home/yanis/debbou_y/my_putchar
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Mar 20 12:27:34 2017 Debbouza Yanis
** Last update Mon Mar 20 12:27:42 2017 Debbouza Yanis
*/
#include "unistd.h"

void my_putchar(char c)
{
  write(1, &c, 1);
}
