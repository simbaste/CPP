//
// Warrior.cpp for  in /home/simomb_s/piscine_cpp_d09/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 14 16:26:22 2016 stephanedarcy simomba
// Last update Fri Jan 15 06:46:06 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "Mage.hh"
#include "Character.hh"

Mage::Mage(std::string const &name, int lvl) : Character(name, lvl)
{
  this->_force = 6;
  this->_endurance = 6;
  this->_intelligence = 12;
  this->_esprit = 11;
  this->_agilite = 7;
  std::cout << _name << " teleported" << std::endl;
}

Mage::~Mage()
{
}

int	Mage::CloseAttack()
{
  if (Range == Mage::CLOSE)
    {
      if (_power >= 10)
	{
	  _power -= 10;
	  Range = Mage::RANGE;
	  std::cout << _name << " blinks" << std::endl;
	  return (0);
	}
      std::cout << _name << " out of power" << std::endl;
      _power = 0;
    }
  return (0);
}

int	Mage::RangeAttack()
{
  if (Range == Mage::RANGE)
    {
      if (_power >= 25)
	{
	  _power -= 25;
	  std::cout << _name << " launches a fire ball" << std::endl;
	  return (20 + _esprit);
	}
      std::cout << _name << " out of power" << std::endl;
      _power = 0;
    }
  return (0);
}

void	Mage::RestorePower()
{
  _power += 50 + _intelligence;
  if (_power > 100)
    _power = 100;
  std::cout << _name << " takes a mana potion" << std::endl;
}
