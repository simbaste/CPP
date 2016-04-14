//
// main.cpp for  in /home/simomb_s/piscine_cpp_d15/ex05
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 21 02:51:16 2016 stephanedarcy simomba
// Last update Thu Jan 21 03:46:27 2016 stephanedarcy simomba
//

#include "ex05.hpp"

int float_to_int(float const& f) {
  return static_cast<int>(f);
}

int	main()
{
  array<int> a(4);
  a[3] = 1;
  const array<int> b = a;
  b.dump();
  array<float> c;
  c.dump();
  c[2] = 1.1;
  c.dump();
  a = c.convertTo<int>(&float_to_int);
  a.dump();

}
