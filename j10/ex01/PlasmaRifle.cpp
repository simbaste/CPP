//
// PlasmaRifle.cpp for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 16:48:12 2016 stephanedarcy simomba
// Last update Sat Jan 16 05:30:57 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "PlasmaRifle.hh"

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

void	PlasmaRifle::attack() const
{
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
