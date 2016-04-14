//
// Warrior.hh for  in /home/simomb_s/piscine_cpp_d09/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 14 16:24:28 2016 stephanedarcy simomba
// Last update Thu Jan 14 18:04:50 2016 stephanedarcy simomba
//

#ifndef WARRIOR_H_
# define WARRIOR_H_

#include <iostream>
#include "Character.hh"

class Warrior: public Character
{
 private:
  std::string	_weaponName;

 public:
  Warrior(std::string name, int lvl, std::string weaponName = "hammer");
  ~Warrior();
  int	CloseAttack();
  int	RangeAttack();
};

#endif /* WARRIOR_H_ */
