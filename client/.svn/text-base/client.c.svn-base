/*
** client.c for minitalk in /home/fillin_j//minitalk/client
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sun Mar 18 17:43:42 2012 jennifer fillinger
** Last update Sun Mar 18 23:26:59 2012 jennifer fillinger
*/

#include	<stdlib.h>
#include	<sys/types.h>
#include	<unistd.h>
#include	<signal.h>
#include	"client.h"

int		charlie(int server_pid, char msg)
{
  char		c;

  c = 0;
  while (c < 8)
    {
      usleep(1000);
      if (((msg >> c) & 1) == 1)
	{
	  if (kill(server_pid, SIGUSR1) == -1)
	    {
	      my_putstre("Error.\n");
	      exit(0);
	    }
	}
      else
	if (kill(server_pid, SIGUSR2) == -1)
	  {
	    my_putstre("Error.\n");
	    exit(0);
	  }
      c++;
    }
  return (0);
}

int		client(char **av)
{
  int		i;
  int		server_pid;
  char		*msg;

  server_pid = my_getnbr(av[1]);
  msg = av[2];
  i = 0;
  while (msg[i] != '\0')
    {
      charlie(server_pid, msg[i]);
      i++;
    }
  charlie(server_pid, msg[i]);
  return (0);
}

void		sig(int sig)
{
  sig = sig;
}

int		main(int ac, char **av)
{
  if (ac == 3)
    {
      if (signal(SIGUSR1, sig) == SIG_ERR)
	{
	  my_putstre("Error on signal.\n");
	  exit(0);
	}
      if (signal(SIGUSR2, sig) == SIG_ERR)
	{
	  my_putstre("Error on signal.\n");
	}
      client(av);
    }
  else
    {
      my_putstre("3 arguments required: ");
      my_putstre("enter server PID and the message");
      my_putstre(" or too many parameter\n");
      exit(0);
    }
  return (0);
}
