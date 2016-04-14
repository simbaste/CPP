//
// ex03.hpp for  in /home/simomb_s/piscine_cpp_d15/ex03
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 20 13:11:04 2016 stephanedarcy simomba
// Last update Wed Jan 20 13:29:14 2016 stephanedarcy simomba
//

#include <iostream>

template <typename T>
void	print(T const& elem)
{
  std::cout << elem << std::endl;
}

template <typename T>
void	foreach(T const *beg, void (&funch)(const T& elem), int const &len)
{
  int	i(0);

  while (i < len)
    {
      funch(beg[i]);
      i++;
    }
}
