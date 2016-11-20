/*
** my_putnbr_u.c for my_putnbr_u in /home/artha/printf
**
** Made by dylan renard
** Login   <artha@epitech.net>
**
** Started on  Sun Nov 20 10:03:55 2016 dylan renard
** Last update Sun Nov 20 10:06:06 2016 dylan renard
*/

#include "my.h"

int	my_putnbr_u(unsigned int nb)
{
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_putchar((nb % 10) + 48);
    }
  else
    {
      my_putchar(nb + 48);
    }
  return (0);
}
