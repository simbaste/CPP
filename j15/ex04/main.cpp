//
// main.cpp for  in /home/simomb_s/piscine_cpp_d15/ex04
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 20 15:37:28 2016 stephanedarcy simomba
// Last update Wed Jan 20 15:39:46 2016 stephanedarcy simomba
//

#include <iostream>
#include "ex04.hpp"

int	main()
{
  std::cout << "1 == 0 ? " << equal(1, 0) << std::endl;
  std::cout << "1 == 1 ? " << equal(1, 1) << std::endl;

  Tester<int> iT;

  std::cout << "41 == 42 ? " << iT.equal(41, 42) << std::endl;
  std::cout << "42 == 42 ? " << iT.equal(42, 42) << std::endl;
  return 0;
}
