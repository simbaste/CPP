//
// Warrior.hh for  in /home/simomb_s/piscine_cpp_d09/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 14 16:24:28 2016 stephanedarcy simomba
// Last update Fri Jan 15 08:41:53 2016 stephanedarcy simomba
//

#ifndef PRIEST_H_
# define PRIEST_H_

#include <iostream>
#include "Mage.hh"

class Priest: public Mage
{
 public:
  Priest(std::string const &name, int lvl);
  ~Priest();
  int	CloseAttack();
  int	RangeAttack();
  void	Heal();
};

#endif /* !PRIEST_H_ */
