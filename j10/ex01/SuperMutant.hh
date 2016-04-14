//
// SuperMutant.hh for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Sat Jan 16 05:33:45 2016 stephanedarcy simomba
// Last update Sat Jan 16 09:27:49 2016 stephanedarcy simomba
//

#ifndef SUPERMUTANT_H_
# define SUPERMUTANT_H_

#include <iostream>
#include <string>
#include "AEnemy.hh"

class SuperMutant : public AEnemy
{
public:
  SuperMutant(int hp = 170, std::string const &type = "Super Mutant");
  ~SuperMutant();
  void	takeDamage(int);
};

#endif /* SUPERMUTANT_H_ */
