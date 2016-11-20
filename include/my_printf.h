/*
** my_printf.h for my_printf in /home/artha/printf
**
** Made by dylan renard
** Login   <artha@epitech.net>
**
** Started on  Sat Nov 19 15:25:42 2016 dylan renard
** Last update Sun Nov 20 15:59:02 2016 dylan renard
*/

#ifndef MY_PRINTF_H_
# define MY_PRINTF_H_
# define SUCCESS	1
# define FAIL		0
#include <stdarg.h>

typedef struct		s_list
{
  char			key;
  int			(*func)(va_list);
  struct s_list		*next;
}			t_list;

t_list			*push_begin_list(t_list *,
					 char,
					 int (*func)(va_list));
int			is_empty_list(t_list *);
int			list_map(t_list *);
t_list			*init_list(void);
int			exec_flag(char, va_list, t_list *, int);

int			my_printf(const char *format, ...);

int			func_putstr(va_list);
int			func_putchar(va_list);
int			func_putnbr(va_list);
int			func_putnbr_oc(va_list);
int			func_putnbr_hexl(va_list);
int			func_pourcen(va_list);
int			func_putnbr_bin(va_list);
int			func_putnbr_hexu(va_list);
int			func_putnbr_point(va_list);
int			func_putnbr_u(va_list);
int			func_putstr_s(va_list);
#endif /* !MY_PRINTF_H_ */
