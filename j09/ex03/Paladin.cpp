//
// Warrior.cpp for  in /home/simomb_s/piscine_cpp_d09/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 14 16:26:22 2016 stephanedarcy simomba
// Last update Fri Jan 15 08:45:42 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "Paladin.hh"

Paladin::Paladin(std::string const &name, int lvl) : Character(name, lvl), Warrior(name, lvl), Priest(name, lvl)
{
  this->_force = 9;
  this->_endurance = 10;
  this->_intelligence = 10;
  this->_esprit = 10;
  this->_agilite = 2;
  std::cout << "the light falls on " << _name << std::endl;
}

Paladin::~Paladin()
{
}

int	Paladin::Intercept()
{
  return Warrior::RangeAttack();
}
