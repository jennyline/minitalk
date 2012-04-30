/*
** my_put_nbr.c for minitalk in /home/fillin_j//minitalk/server
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sun Mar 18 20:35:00 2012 jennifer fillinger
** Last update Sun Mar 18 23:16:07 2012 jennifer fillinger
*/

#include "server.h"

int	my_put_nbr(int nb)
{
  int	div;
  int	ret;

  div = 1;
  ret = 0;
  if (nb > 0)
    nb = nb * -1;
  else if (nb < 0)
    my_putchar('-');
  while (nb / div < -9)
    div = div * 10;
  while (div >= 1)
    {
      ret = ret + 1;
      my_putchar(nb / div * -1 + 48);
      nb = nb % div;
      div = div / 10;
    }
  return (ret);
}
