//
// PowerFist.cpp for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Sat Jan 16 05:15:21 2016 stephanedarcy simomba
// Last update Sat Jan 16 09:31:04 2016 stephanedarcy simomba
//

#include "PowerFist.hh"

PowerFist::PowerFist(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
}

PowerFist::~PowerFist()
{
}

void	PowerFist::attack() const
{
  std::cout << "* pschhh... SBAM! *" << std::endl;
}
