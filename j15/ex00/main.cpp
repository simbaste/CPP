//
// main.cpp for  in /home/simomb_s/piscine_cpp_d15
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 20 09:25:15 2016 stephanedarcy simomba
// Last update Wed Jan 20 09:37:12 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "ex00.hpp"

int main()
{
  int a = 2;
  int b = 3;
  ::swap(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
  std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
  std::cout << "add(a, b) = " << ::add(a, b) << std::endl;

  std::string c = "chaine1";
  std::string d = "chaine2";

  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
  std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
  std::cout << "add(c, d) = " << ::add(c, d) << std::endl;
  return (0);
}
