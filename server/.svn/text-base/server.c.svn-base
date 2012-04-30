/*
** server.c for minitalk in /home/fillin_j//minitalk/server
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sun Mar 18 20:34:39 2012 jennifer fillinger
** Last update Sun Mar 18 23:27:09 2012 jennifer fillinger
*/

#include	<stdlib.h>
#include	<sys/types.h>
#include	<unistd.h>
#include	<signal.h>
#include	"server.h"

void		my_writer(int bin)
{
  static char	c;
  static int	i;

  c += (bin << i++);
  if (i > 7)
    {
      my_putchar((c == '\0') ? '\n' : c);
      c = 0;
      i = 0;
    }
}

void		sig(int	sign)
{
  if (sign == SIGUSR1)
    my_writer(1);
  if (sign == SIGUSR2)
    my_writer(0);
}

void		my_sig()
{
  usleep(1000);
  if (signal(SIGUSR1, sig) == SIG_ERR)
    {
      my_putstre("Error.\n");
      exit(0);
    }
  if (signal(SIGUSR2, sig) == SIG_ERR)
    {
      my_putstre("Error.\n");
      exit(0);
    }
}

int		server()
{
  my_putstr("Server PID : ");
  my_put_nbr(getpid());
  my_putchar('\n');
}

int		main(int ac, char **av)
{
  if (ac != 1)
    {
      my_putstre("bad parameter : just need 1.\n");
      exit(0);
    }
  my_sig();
  server();
  while (42)
    pause();
}
