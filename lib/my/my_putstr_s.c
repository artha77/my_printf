/*
** my_putstr_s.c for my_putstr_s in /home/artha/printf
**
** Made by dylan renard
** Login   <artha@epitech.net>
**
** Started on  Sun Nov 20 13:24:51 2016 dylan renard
** Last update Sun Nov 20 14:10:14 2016 dylan renard
*/

#include "my.h"

int		my_putstr_s(char *str, int count)
{
  while (str[0] != '\0')
    {
      if (is_bt(str[0],0,31) || str[0] == 127)
	{
	  my_putchar('\\');
	  if (str[0] <= 7)
	    {
	      my_putstr("00");
	      count += 2;
	    }
	  else if (str[0] != 127)
	    {
	      my_putchar('0');
	      count++;
	    }
	  count += my_putnbr_base_u((unsigned int)str[0], "01234567");
	}
      else
	my_putchar(str[0]);
      count++;
      str++;
    }
  return (count);
}
