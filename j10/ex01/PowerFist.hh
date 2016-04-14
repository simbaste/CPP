//
// PowerFist.hh for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Sat Jan 16 05:15:09 2016 stephanedarcy simomba
// Last update Sat Jan 16 08:23:17 2016 stephanedarcy simomba
//

#ifndef POWERFIRST_H_
# define POWERFIRST_H_

#include <iostream>
#include <string>
#include "AWeapon.hh"

class PowerFist : public AWeapon
{
 public:
  PowerFist(std::string const &name = "Power Fist", int apcost = 8, int damage = 50);
  ~PowerFist();
  void	attack() const;
};

#endif /* POWERFIRST_H_ */
