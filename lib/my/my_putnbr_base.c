/*
** my_putnbr_base.c for my_putnbr_base in /home/Artha77/CPool_Day06
**
** Made by dylan renard
** Login   <Artha77@epitech.net>
**
** Started on  Tue Oct 11 09:08:30 2016 dylan renard
** Last update Sun Nov 20 10:47:06 2016 dylan renard
*/

#include "my.h"

static int	my_verif_base(long nbr, char *base)
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
      if (nbr < 0)
	{
	  nbr = nbr * -1;
	  my_putchar('-');
	}
      while (nbr != 0)
	{
	  my_putchar(*base);
	  nbr = nbr - 1;
	}
      return (-1);
    }
  return (0);
}

int		my_putnbr_base(long nbr, char *base)
{
  int		base_len;
  long		number[300];
  int		i;
  int		c;

  i = my_verif_base(nbr, base);
  base_len = my_strlen(base);
  c = 0;
  if (nbr < 0 && i != -1)
    {
      my_putchar('-');
      nbr = nbr * -1;
    }
  while (nbr != 0 && i != -1)
    {
      number[i] = nbr % base_len;
      nbr = nbr / base_len;
      i = i + 1;
    }
  while (--i >= 0)
    {
      my_putchar(*(base + number[i]));
      c++;
    }
  return (c);
}
