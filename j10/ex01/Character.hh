//
// Character.hh for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Sat Jan 16 05:57:20 2016 stephanedarcy simomba
// Last update Sat Jan 16 09:19:03 2016 stephanedarcy simomba
//

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <iostream>
#include <string>
#include "AWeapon.hh"
#include "AEnemy.hh"

class Character
{
private:
  std::string const	_name;
  int			_ap;
  AWeapon		*_weapon = NULL;

  public:
  Character(std::string const &name);
  int			getAP() const;
  AWeapon		*getWeapon() const;
  ~Character();
  void	recoverAP();
  void	equip(AWeapon*);
  void	attack(AEnemy*);
  std::string const	getName() const;
};

std::ostream	&operator<<(std::ostream &os, Character const &Char);

#endif
