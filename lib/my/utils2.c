/*
** utils2.c for  in /home/artha/printf
**
** Made by dylan renard
** Login   <artha@epitech.net>
**
** Started on  Sat Nov 19 18:48:57 2016 dylan renard
** Last update Sun Nov 20 16:13:15 2016 dylan renard
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"
#include "my_printf.h"

int		func_putnbr_hexl(va_list ap)
{
  int		nb;

  nb = va_arg(ap, int);
  nb = my_putnbr_base_u(nb, "0123456789abcdef");
  return (nb);
}

int		func_putnbr_hexu(va_list ap)
{
  int		nb;

  nb = va_arg(ap, int);
  nb = my_putnbr_base_u(nb, "0123456789ABCDEF");
  return (nb);
}

int		func_putnbr_bin(va_list ap)
{
  int		nb;

  nb = va_arg(ap, int);
  nb = my_putnbr_base_u(nb, "01");
  return (nb);
}

int		func_putnbr_point(va_list ap)
{
  unsigned long		nb;

  nb = va_arg(ap, long);
  if (nb)
    {
      my_putstr("0x");
      nb = my_putnbr_base(nb, "0123456789abcdef");
      return (nb + 2);
    }
  my_putstr("(nil)");
  return (5);
}

int		func_putnbr_u(va_list ap)
{
  unsigned int		nb;

  nb = va_arg(ap, int);
  my_putnbr_u(nb);
  return (number_len_u(nb));
}
