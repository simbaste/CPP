/*
** white_rabbit.c for  in /home/simomb_s/piscine_cpp_d01/ex00
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Jan  6 09:39:37 2016 stephanedarcy simomba
** Last update Thu Jan  7 09:45:32 2016 stephanedarcy simomba
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int	follow_the_white_rabbit(void)
{
  int	n;
  int	s;

  s = 0;
  n = 0;
  while (n != 37 && s < 397 && n != 1)
    {
      n = (random() % 37) + 1;
      if (n == 13 || n >= 34 || n != 37)
	printf("droite\n");
      if ((n > 24) && ((n * 3) == 78 || (n * 3) == 148 || n % 8 == 0))
	printf("derriere\n");
      if ((n >= 4 && n <= 6) || n == 28 || (n >= 17 && n <= 21))
	printf("gauche\n");
      if (n == 15 || (n * 2) == 10 || (n * 3) == 15)
	printf("devant\n");
      s += n;
    }
  printf("LAPIN !!!\n");
  return (s);
}
