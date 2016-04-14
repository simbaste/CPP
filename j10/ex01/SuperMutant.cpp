//
// SuperMutant.cpp for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Sat Jan 16 05:38:12 2016 stephanedarcy simomba
// Last update Sat Jan 16 08:34:08 2016 stephanedarcy simomba
//

#include "SuperMutant.hh"

SuperMutant::SuperMutant(int hp, std::string const &type) : AEnemy(hp, type)
{
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
  std::cout << "Aaargh ..." << std::endl;
}

void	SuperMutant::takeDamage(int dam)
{
  if (dam >= 3)
    _hp -= dam;
}
