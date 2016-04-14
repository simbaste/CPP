//
// ex02.hpp for  in /home/simomb_s/piscine_cpp_d15/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 20 11:29:37 2016 stephanedarcy simomba
// Last update Wed Jan 20 12:59:19 2016 stephanedarcy simomba
//

#include <iostream>

template <typename X>
X const	&min(X const &a, X const &b)
{
  std::cout << "template min" << std::endl;
  if (b < a)
    return (b);
  return (a);
}

int const	&min(int const &a, int const &b)
{
  std::cout << "non-template min" << std::endl;
  if (b < a)
    return (b);
  return (a);
}

template<typename X>
X	templateMin(X const *tab, int const len)
{
  int	i(1);
  X	val;

  val = tab[0];
  while (i < len)
    {
      val = min<X>(val, tab[i]);
      i++;
    }
  return (val);
}

int	nonTemplateMin(int const *tab, int const len)
{
  int	i(1);
  int	val;

  val = tab[0];
  while (i < len)
    {
      val = min(val, tab[i]);
      i++;
    }
  return (val);
}
