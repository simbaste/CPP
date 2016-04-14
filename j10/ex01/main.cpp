//
// main.cpp for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 16:31:45 2016 stephanedarcy simomba
// Last update Sat Jan 16 09:26:28 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "AWeapon.hh"
#include "AEnemy.hh"
#include "Character.hh"
#include "PlasmaRifle.hh"
#include "PowerFist.hh"
#include "RadScorpion.hh"
#include "SuperMutant.hh"

int		main()
{
  Character* zaz = new Character("zaz");
  std::cout << *zaz;
  AEnemy* b = new RadScorpion();
  AWeapon* pr = new PlasmaRifle();
  AWeapon* pf = new PowerFist();

  zaz->equip(pr);
  std::cout << *zaz;
  zaz->equip(pf);
  zaz->attack(b);
  std::cout << *zaz;
  zaz->equip(pr);
  std::cout << *zaz;
  zaz->attack(b);
  std::cout << *zaz;
  zaz->attack(b);
  std::cout << *zaz;
  return (0);
}
