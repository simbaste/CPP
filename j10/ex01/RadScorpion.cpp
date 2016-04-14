//
// RadScorpion.cpp for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Sat Jan 16 05:48:40 2016 stephanedarcy simomba
// Last update Sat Jan 16 05:57:05 2016 stephanedarcy simomba
//

#include "RadScorpion.hh"

RadScorpion::RadScorpion(int hp, std::string const &type) : AEnemy(hp, type)
{
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
  std::cout << "* SPROTCH *" << std::endl;
}
