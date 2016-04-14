//
// main.cpp for  in /home/simomb_s/piscine_cpp_d16
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 21 10:10:14 2016 stephanedarcy simomba
// Last update Thu Jan 21 17:29:36 2016 stephanedarcy simomba
//

#include "Parser.h"

int		main()
{
  Parser	p;

  p.feed("((12*2)+14)");
  Parser A(p);
  std::cout << A.result() << std::endl;
  p.feed("((17 % 9) / 4)");
  A = p;
  std::cout << A.result() << std::endl;
  p.reset();
  p.feed("10*((17 - 4) * 13)");
  std::cout << p.result() << std::endl;
  return (0);
}
