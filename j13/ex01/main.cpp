//
// main.cpp for  in /home/simomb_s/piscine_cpp_d13/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 18 09:49:52 2016 stephanedarcy simomba
// Last update Mon Jan 18 11:23:26 2016 stephanedarcy simomba
//

#include <iostream>
#include "Toy.h"

int main()
{
  Toy toto;
  Toy ET(Toy::ALIEN, "green", "./alien.txt");

  toto.setName("TOTO !");

  Toy moi = ET;
  if (toto.getType() == Toy::BASIC_TOY)
    std::cout << "basic toy: " << toto.getName() << std::endl;
  std::cout  << toto.getAscii() << std::endl;
  if (moi.getType() == Toy::ALIEN)
    std::cout << "this alien is: " << moi.getName() << std::endl
  	      << moi.getAscii() << std::endl;
  return 1337;
}
