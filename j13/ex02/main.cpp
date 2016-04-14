//
// main.cpp for  in /home/simomb_s/piscine_cpp_d13/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 18 12:08:12 2016 stephanedarcy simomba
// Last update Mon Jan 18 12:08:12 2016 stephanedarcy simomba
//

#include <iostream>
#include "Buzz.h"
#include "Woody.h"

int	main()
{
  Buzz	b("Buzz Lightyear");
  Woody	w("Cowboy Woody");

  std::cout << "w say : My name's " << w.getName() << std::endl
	    << w.getAscii() << std::endl;

  std::cout << "b say : My name's " << b.getName() << std::endl
	    << b.getAscii() << std::endl;
  return (0);
}
