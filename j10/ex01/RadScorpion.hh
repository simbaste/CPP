//
// RadScorpion.hh for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Sat Jan 16 05:45:17 2016 stephanedarcy simomba
// Last update Sat Jan 16 09:13:21 2016 stephanedarcy simomba
//

#ifndef RADSCORPION_H_
# define RADSCORPION_H_

#include <iostream>
#include <string>
#include "AEnemy.hh"

class	RadScorpion : public AEnemy
{
public:
  RadScorpion(int hp = 80, std::string const &type = "RadScorpion");
  ~RadScorpion();
};

#endif /* !RADSCORPION_H_ */
