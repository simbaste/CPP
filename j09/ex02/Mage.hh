//
// Warrior.hh for  in /home/simomb_s/piscine_cpp_d09/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 14 16:24:28 2016 stephanedarcy simomba
// Last update Fri Jan 15 03:40:31 2016 stephanedarcy simomba
//

#ifndef MAGE_H_
# define MAGE_H_

#include <iostream>
#include "Character.hh"

class Mage: public Character
{
 public:
  Mage(std::string name, int lvl);
  ~Mage();
  int	CloseAttack();
  int	RangeAttack();
  void	RestorePower();
};

#endif /* !MAGE_H_ */
