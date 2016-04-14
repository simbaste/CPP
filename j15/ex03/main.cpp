//
// main.cpp for  in /home/simomb_s/piscine_cpp_d15/ex03
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 20 13:20:51 2016 stephanedarcy simomba
// Last update Wed Jan 20 13:21:29 2016 stephanedarcy simomba
//

#include "ex03.hpp"

int	main()
{
  int tab[] = { 11, 3, 89, 42 };
  foreach(tab, print<int>, 4);
  std::string tab2[] = { "j’", "aime", "les", "templates", "!" };
  foreach(tab2, print, 5);
  return 0;
}
