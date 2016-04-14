/*
** main.c for  in /home/simomb_s/piscine_cpp_d01/ex01
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Jan  6 16:01:02 2016 stephanedarcy simomba
** Last update Wed Jan  6 20:10:36 2016 stephanedarcy simomba
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int	menger(int a, int b, int x, int y);

int             my_getnbr(char *str)
{
  int           i;
  int           signe;
  int           nb;

  i = 0;
  signe = 1;
  nb = 0;
  while (str && str[i] != 0 && (str[i] == '-' || str[i] == '+'))
    {
      if (str[i] == '-')
	signe *= -1;
      ++i;
    }
  while (str && str[i] != 0 && str[i] >= '0' && str[i] <= '9')
    {
      nb = nb * 10 + str[i++] - '0';
      if (nb < 0)
        return (0);
    }
  return (nb * signe);
}

int	my_verif(int nb)
{
  int	i;

  i = 0;
  while (nb  > 1)
    {
      if ((nb % 3) == 0)
	nb /= 3;
      else
	return (-1);
      i++;
    }
  return (i);
}

int	main(int ac, char **av)
{
  int	square_size;
  int	level;

  if (ac == 3)
    {
      if ((square_size = my_getnbr(av[1])) > 0 &&
	  (level = my_getnbr(av[2])) > 0 &&
	  my_verif(square_size) != -1 && level <= my_verif(square_size))
	menger(square_size, level, 0, 0);
    }
  return (0);
}
