/*
** number_len.c for number_len in /home/artha/printf
**
** Made by dylan renard
** Login   <artha@epitech.net>
**
** Started on  Sun Nov 20 13:12:49 2016 dylan renard
** Last update Sun Nov 20 13:15:43 2016 dylan renard
*/

#include "my.h"

int		number_len_u(unsigned int nb)
{
  int		i;

  i = 0;
  while (nb > 0)
    {
      nb /= 10;
      i++;
    }
  return (i);
}

int		number_len(int nb)
{
  int		i;

  i = 0;
  while (nb > 0)
    {
      nb /= 10;
      i++;
    }
  return (i);
}
