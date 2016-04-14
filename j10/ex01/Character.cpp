//
// Character.cpp for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Sat Jan 16 06:22:03 2016 stephanedarcy simomba
// Last update Sat Jan 16 09:24:07 2016 stephanedarcy simomba
//

#include "Character.hh"

Character::Character(std::string const &name) : _name(name), _ap(40)
{
}

Character::~Character()
{
}

std::string const	Character::getName() const
{
  return (_name);
}

AWeapon	*Character::getWeapon() const
{
  return (_weapon);
}

int	Character::getAP() const
{
  return (_ap);
}

void	Character::equip(AWeapon *weapon)
{
  _weapon = weapon;
}

void	Character::recoverAP()
{
  _ap += 10;
  if (_ap > 40)
    _ap = 40;
}

void	Character::attack(AEnemy *enem)
{
  if (_weapon)
    {
      std::cout << _name << " attacks " << enem->getType() << " with a " << _weapon->getName() << std::endl;
      _weapon->attack();
      enem->takeDamage(_weapon->getDamage());
      _ap -= _weapon->getAPCost();
      if (enem->getHP() <= 0)
	delete enem;
    }
}

std::ostream	&operator<<(std::ostream &os, Character const &Char)
{
  if (Char.getWeapon())
    os << Char.getName() << " has " << Char.getAP() << " AP and wields a " << Char.getWeapon()->getName() << std::endl;
  else
    os << Char.getName() << " has " << Char.getAP() << " AP and is unarmed" << std::endl;
  return (os);
}
