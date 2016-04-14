//
// PlasmaRifle.hh for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 16:47:14 2016 stephanedarcy simomba
// Last update Sat Jan 16 09:27:21 2016 stephanedarcy simomba
//

#ifndef PLASMARIFLE_H_
# define PLASMARIFLE_H_

#include <iostream>
#include <string>
#include "AWeapon.hh"

class PlasmaRifle : public AWeapon
{
public:
  PlasmaRifle(std::string const &name = "Plasma Rifle", int apcost = 5, int damage = 21);
  ~PlasmaRifle();
  void	attack() const;
};

#endif /* PLASMARIFLE_H_ */
