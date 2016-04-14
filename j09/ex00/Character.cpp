//
// Character.cpp for  in /home/simomb_s/piscine_cpp_d09/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 14 11:37:11 2016 stephanedarcy simomba
// Last update Thu Jan 14 21:26:07 2016 stephanedarcy simomba
//

#include <iostream>
#include "Character.hh"

Character::Character(std::string name, int lvl)
  : Range(CLOSE), _name(name), _lvl(lvl), _power(100), _pv(100), _force(5), _endurance(5), _intelligence(5), _esprit(5), _agilite(5)
{
  std::cout << _name << " Created" << std::endl;
}

Character::~Character()
{
}

const std::string	&Character::getName() const
{
  return (_name);
}

int			Character::getLvl() const
{
  return (_lvl);
}

int			Character::getPv() const
{
  return (_pv);
}

int			Character::getPower() const
{
  return (_power);
}

int			Character::CloseAttack()
{
  if (_power > 10)
    {
      _power -= 10;
      std::cout << _name <<  " strikes with a wood stick" << std::endl;
      return (10 + _force);
    }
  std::cout << _name << " out of power" << std::endl;
  _power = 0;
  return (0);
}

int			Character::RangeAttack()
{
  if (_power > 10)
    {
      _power -= 10;
      std::cout << _name << " launches a stone" << std::endl;
      return (5 + _force);
    }
  std::cout << _name << " out of power" << std::endl;
  _power = 0;
  return (0);
}

void			Character::Heal()
{
  if (_pv <= 50)
    _pv += 50;
  else
    _pv = 100;
  std::cout << _name << " takes a potion" << std::endl;
}

void		Character::RestorePower()
{
  _power = 100;
  std::cout << _name << " eats" << std::endl;
}

void		Character::TakeDamage(int _damage)
{
  _pv -= _damage;
  if (_pv > 0)
    std::cout << _name << " takes " << _damage <<" damage" << std::endl;
  else
    std::cout << _name << " out of combat" << std::endl;
}
