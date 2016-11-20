/*
** list.c for  in /home/artha/printf
**
** Made by dylan renard
** Login   <artha@epitech.net>
**
** Started on  Sat Nov 19 15:32:30 2016 dylan renard
** Last update Sun Nov 20 16:07:11 2016 dylan renard
*/

#include "my_printf.h"
#include "my.h"
#include <stdlib.h>
#include <stdarg.h>

int		is_empty_list(t_list *list)
{
  return ((list == NULL) ? SUCCESS : FAIL);
}

t_list		*push_begin_list(t_list *list,
				 char key,
				 int (*func)(va_list))
{
  t_list	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (NULL);
  elem->key = key;
  elem->func = func;
  elem->next = list;
  list = elem;
  return (list);
}

t_list		*init_list()
{
  t_list	*list;
  char		*flag;

  list = NULL;
  list = push_begin_list(list, 's', &func_putstr);
  list = push_begin_list(list, 'c', &func_putchar);
  list = push_begin_list(list, 'd', &func_putnbr);
  list = push_begin_list(list, 'o', &func_putnbr_oc);
  list = push_begin_list(list, 'x', &func_putnbr_hexl);
  list = push_begin_list(list, 'X', &func_putnbr_hexu);
  list = push_begin_list(list, '%', &func_pourcen);
  list = push_begin_list(list, 'b', &func_putnbr_bin);
  list = push_begin_list(list, 'p', &func_putnbr_point);
  list = push_begin_list(list, 'u', &func_putnbr_u);
  list = push_begin_list(list, 'S', &func_putstr_s);
  return (list);
}

int		exec_flag(char flag, va_list ap, t_list *list, int c)
{
  int		*read;

  if (flag == 'n')
    {
      read = va_arg(ap, int *);
      *read = c;
      return (0);
    }
  while (list != NULL)
    {
      if (flag == list->key)
	return (list->func(ap));
      list = list->next;
    }
  my_putchar('%');
  my_putchar(flag);
  return (2);
}
