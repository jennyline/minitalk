/*
** my_getnbr.c for minitalk in /home/fillin_j//minitalk/client
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sun Mar 18 18:21:03 2012 jennifer fillinger
** Last update Sun Mar 18 23:03:03 2012 jennifer fillinger
*/

#include "client.h"

int		get_calc(int i, int sign, int nb, char *str)
{
  while (str[i])
    {
      if (str[i] == '-' || str[i] == '+')
	{
	  if (str[i] == '-')
	    sign++;
	}
      else if (str[i] >= '0' && str[i] <= '9')
	nb = (nb * 10) + (str[i] -48);
      else
	{
	  if (sign % 2 == 1)
	    nb = nb * -1;
	  return (nb);
	}
      i++;
    }
  if (sign % 2 == 1)
    nb = nb * -1;
  return (nb);
}

int		my_getnbr(char *str)
{
  int		i;
  int		sign;
  int		nb;

  i = 0;
  nb = 0;
  sign = 0;
  nb = get_calc(i, sign, nb, str);
  return (nb);
}
