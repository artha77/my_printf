/*
** utils3.c for my_printf in /home/artha/printf
**
** Made by dylan renard
** Login   <artha@epitech.net>
**
** Started on  Sun Nov 20 13:21:56 2016 dylan renard
** Last update Sun Nov 20 14:10:28 2016 dylan renard
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"
#include "my_printf.h"

int		func_putstr_s(va_list ap)
{
  char		*s;

  s = va_arg(ap, char *);
  return (my_putstr_s(s, 0));
}
