//
// AEnemy.cpp for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Sat Jan 16 05:25:34 2016 stephanedarcy simomba
// Last update Sat Jan 16 09:17:00 2016 stephanedarcy simomba
//

#include "AEnemy.hh"

AEnemy::AEnemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
}

AEnemy::~AEnemy()
{
}

std::string const	AEnemy::getType() const
{
  return (_type);
}

int	AEnemy::getHP() const
{
  return (_hp);
}

void	AEnemy::takeDamage(int dam)
{
  if (dam > 0)
    _hp -= dam;
}
