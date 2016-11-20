/*
** utils.c for  in /home/artha/printf
**
** Made by dylan renard
** Login   <artha@epitech.net>
**
** Started on  Sat Nov 19 17:19:48 2016 dylan renard
** Last update Sun Nov 20 16:37:55 2016 dylan renard
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"
#include "my_printf.h"

int		func_putstr(va_list ap)
{
  char		*s;

      s = va_arg(ap, char *);
      if (s != NULL)
	{
	  my_putstr(s);
	  return (my_strlen(s));
	}
  my_putstr("(null)");
  return (6);
}

int		func_putchar(va_list ap)
{
  char		c;

  c = va_arg(ap, int);
  my_putchar((char)c);
  return (1);
}

int		func_putnbr(va_list ap)
{
  int		nb;

  nb = va_arg(ap, int);
  my_put_nbr(nb);
  return (number_len(nb));
}

int		func_pourcen(va_list ap)
{
  my_putchar('%');
  return (1);
}

int		func_putnbr_oc(va_list ap)
{
  int		nb;

  nb = va_arg(ap, int);
  nb = my_putnbr_base_u(nb, "01234567");
  return (nb);
}
