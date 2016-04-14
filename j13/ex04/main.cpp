//
// main.cpp for  in /home/simomb_s/piscine_cpp_d13/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 18 12:08:12 2016 stephanedarcy simomba
// Last update Mon Jan 18 14:30:53 2016 stephanedarcy simomba
//

#include <iostream>
#include "Buzz.h"
#include "Woody.h"
#include "Toy.h"

int	main()
{
  Toy a(Toy::BASIC_TOY, "REX", "rex.txt");

  std::cout << a;
  a << "\\o/";
  std::cout << a;
  return (0);
}
