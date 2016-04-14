//
// ex01.hpp for  in /home/simomb_s/piscine_cpp_d15/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 20 10:14:55 2016 stephanedarcy simomba
// Last update Wed Jan 20 11:27:06 2016 stephanedarcy simomba
//

#include <string.h>

template <typename X>
int	compare(X const &a, X const &b)
{
  if (a == b)
    return (0);
  else if (a < b)
    return (-1);
  return (1);
}

template int	compare<const char *>(const char * const &a, const char * const &b);
