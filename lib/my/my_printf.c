/*
** my_printf.c for my_printf in /home/artha/printf
**
** Made by dylan renard
** Login   <artha@epitech.net>
**
** Started on  Sat Nov 19 14:27:36 2016 dylan renard
** Last update Sat Nov 19 18:35:16 2016 dylan renard
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"
#include "my_printf.h"

int		my_printf(const char *format, ...)
{
  va_list	ap;
  int		c_read;
  t_list	*list;
  int		i;

  va_start(ap, format);
  c_read = 0;
  i = 0;
  list = init_list();
  while (format[i] != '\0')
    {
      if (format[i] == '%' && format[i + 1] != '\0')
	{
	  c_read += exec_flag(format[i + 1], ap, list);
	  i += 2;
	}
      else
	{
	  c_read++;
	  my_putchar(format[i]);
	  i++;
	}
    }
  va_end(ap);
  return (c_read);
}
