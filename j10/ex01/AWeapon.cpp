//
// AWeapon.cpp for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 16:11:13 2016 stephanedarcy simomba
// Last update Fri Jan 15 16:31:17 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "AWeapon.hh"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
  : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon()
{
}

std::string const	AWeapon::getName() const
{
  return (_name);
}

int			AWeapon::getAPCost() const
{
  return (_apcost);
}

int			AWeapon::getDamage() const
{
  return (_damage);
}
