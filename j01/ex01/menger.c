/*
** menger.c for  in /home/simomb_s/piscine_cpp_d01/ex01
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Jan  6 13:06:14 2016 stephanedarcy simomba
** Last update Wed Jan  6 19:28:25 2016 stephanedarcy simomba
*/

#include <stdio.h>

int	menger(int size, int level, int x, int y)
{
  if (level > 0)
    printf("%03d %03d %03d\n", (size / 3), (size / 3) + x, (size / 3) + y);
  if (level > 1)
    {
      for(int i = 0; i < 3; i++)
	{
	  for (int j = 0; j < 3; j++)
	    {
	      if (i != 1 || j != 1)
		menger((size / 3), level - 1, i * (size / 3) + x, j * (size / 3) + y);
	    }
	}
    }
  return (0);
}
