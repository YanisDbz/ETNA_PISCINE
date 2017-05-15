/*
** my_putchar.c for my_putchar.c in /home/yanis/debbou_y/my_putchar_main
** 
** Made by Debbouza Yanis
** Login   <debbou_y@etna-alternance.net>
** 
** Started on  Mon Mar 20 12:28:59 2017 Debbouza Yanis
** Last update Mon Mar 20 12:29:04 2017 Debbouza Yanis
*/
#include "unistd.h"

void my_putchar(char c)
{
  write(1, &c, 1);
}
