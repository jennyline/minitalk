/*
** chest.c for minitalk in /home/fillin_j//minitalk
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sun Mar 18 17:26:43 2012 jennifer fillinger
** Last update Sun Mar 18 22:18:25 2012 jennifer fillinger
*/

#include <unistd.h>
#include "client/client.h"
#include "server/server.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

int		my_putstre(char *str)
{
  write(2, str, my_strlen(str));
  return (0);
}

char		*my_strcpy(char *dst, char *source)
{
  int	i;

  i = 0;
  while (source[i])
    {
      dst[i] = source[i];
      i++;
    }
  dst[i] = '\0';
  return (dst);
}
