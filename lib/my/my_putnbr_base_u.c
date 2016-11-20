/*
** my_putnbr_base_u.c for my_putnbr_base_u in /home/artha/printf
**
** Made by dylan renard
** Login   <artha@epitech.net>
**
** Started on  Sun Nov 20 10:08:35 2016 dylan renard
** Last update Sun Nov 20 10:27:28 2016 dylan renard
*/

#include "my.h"

static int	my_verif_base(unsigned int nbr, char *base)
{
  if (*base == '\0')
    return (-1);
  if (nbr == 0)
    {
      my_putchar(*base);
      return (-1);
    }
  if (my_strlen(base) == 1)
    {
      while (nbr != 0)
	{
	  my_putchar(*base);
	  nbr = nbr - 1;
	}
      return (-1);
    }
  return (0);
}

int		my_putnbr_base_u(unsigned int nbr, char *base)
{
  int		base_len;
  long		number[300];
  int		i;
  int		c;

  i = my_verif_base(nbr, base);
  base_len = my_strlen(base);
  c = 0;
  while (nbr != 0 && i != -1)
    {
      number[i] = nbr % base_len;
      nbr = nbr / base_len;
      i = i + 1;
    }
  i = i - 1;
  while (i >= 0)
    {
      my_putchar(*(base + number[i]));
      c++;
      i = i - 1;
    }
  return (c);
}
