//
// main.cpp for  in /home/simomb_s/piscine_cpp_d15/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 20 11:51:02 2016 stephanedarcy simomba
// Last update Wed Jan 20 16:57:27 2016 stephanedarcy simomba
//

#include <iostream>
#include "ex02.hpp"

int	main()
{
  int tab[5] = {4, 8, 7, 3, 2};
  //  int tab[2] = {3, 0};

  int minimum = templateMin(tab, 5);
  std::cout << "templateMin(tab, 5) = " << minimum << std::endl;
  minimum = nonTemplateMin(tab, 5);
  std::cout << "nonTemplateMin(tab, 5) = " << minimum << std::endl;
}
