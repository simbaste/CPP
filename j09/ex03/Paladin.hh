//
// Warrior.hh for  in /home/simomb_s/piscine_cpp_d09/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 14 16:24:28 2016 stephanedarcy simomba
// Last update Fri Jan 15 09:14:22 2016 stephanedarcy simomba
//

#ifndef PALADIN_H_
# define PALADIN_H_

#include <iostream>
#include "Warrior.hh"
#include "Priest.hh"

class Paladin: public Warrior, public Priest
{
 public:
  Paladin(std::string const &name, int lvl);
  ~Paladin();

  using	Warrior::CloseAttack;
  using	Priest::RangeAttack;
  using	Priest::Heal;
  using	Warrior::RestorePower;

  int	Intercept();
};

#endif /* !PALADIN_H_ */
