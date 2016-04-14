//
// AWeapon.hh for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 16:11:29 2016 stephanedarcy simomba
// Last update Sat Jan 16 08:41:21 2016 stephanedarcy simomba
//

#ifndef AWEAPON_H_
# define AWEAPON_H_

#include <iostream>
#include <string>

class AWeapon
{
protected:
  std::string const	_name;
  int			_apcost;
  int			_damage;

public:
  AWeapon(std::string const &name, int apcost, int damage);
  virtual ~AWeapon();
  std::string const	getName() const;
  int			getAPCost() const;
  int			getDamage() const;
  virtual void		attack() const = 0;
};

#endif /* !AWEAPON_H_ */
