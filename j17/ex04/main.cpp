//
// main.cpp for  in /home/simomb_s/piscine_cpp_d17/ex04
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Sat Jan 23 08:46:11 2016 stephanedarcy simomba
// Last update Sat Jan 23 09:09:35 2016 stephanedarcy simomba
//

#include <string>
#include <list>
#include <vector>
#include "Container.hpp"

int	main()
{
  contain<char, std::list> test;
  test.push('t');
  test.aff();
  test.add();
  test.aff();
  contain <int, std::vector> test2;
  test2.push(1);
  test2.aff();
  test2.add();
  test2.aff();
  return 0;
}
