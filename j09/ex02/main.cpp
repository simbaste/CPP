//
// main.cpp for  in /home/simomb_s/piscine_cpp_d09/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 04:10:25 2016 stephanedarcy simomba
// Last update Fri Jan 15 05:18:44 2016 stephanedarcy simomba
//

#include <cassert>
#include "Mage.hh"
#include "Mage.hh"
#include "Priest.hh"
#include "Priest.hh"



static void testMage()

{

  Mage sully("Sully", 40);
  Mage const barrie_j("Jean", 380);

  assert(sully.getName() == "Sully");
  assert(sully.getLvl() == 40);
  assert(barrie_j.getName() == "Jean");
  assert(barrie_j.getLvl() == 380);
  for (int i = 0; i < 10; i++) {
    sully.Range = Character::CLOSE;
    assert(sully.CloseAttack() == 0);
    assert(sully.Range == Character::RANGE);
  }
  sully.Range = Character::CLOSE;
  assert(sully.CloseAttack() == 0);
  assert(sully.getPower() == 0);
  sully.RestorePower();
  assert(sully.getPower() == 62);
  sully.RestorePower();
  assert(sully.getPower() == 100);
  sully.RestorePower();
  assert(sully.getPower() == 100);
  sully.Range = Character::RANGE;
  for (int i = 0; i < 4; i++)
    assert(sully.RangeAttack() == 31);
  assert(sully.RangeAttack() == 0);
  sully.TakeDamage(97);
  sully.Heal();
  assert(sully.getPv() == 53);
  sully.Heal();
  assert(sully.getPv() == 100);
  sully.Heal();
  assert(sully.getPv() == 100);
}

static void testPriest()

{

  Priest iopy("Iopy", 84);
  Priest const mercar_r("Romain", 97);

  assert(iopy.getName() == "Iopy");
  assert(mercar_r.getName() == "Romain");
  assert(iopy.getLvl() == 84);
  assert(mercar_r.getLvl() == 97);
  for (int i = 0; i < 10; i++)
    assert(iopy.CloseAttack() == 31);
  assert(iopy.CloseAttack() == 0);
  assert(iopy.getPower() == 0);
  iopy.RestorePower();
  assert(iopy.getPower() == 92);
  //assert(iopy.getPower() == 100);
  iopy.RestorePower();
  assert(iopy.getPower() == 100);
  iopy.RestorePower();
  assert(iopy.getPower() == 100);
  iopy.Range = Character::RANGE;
  for (int i = 0; i < 4; i++)
    assert(iopy.RangeAttack() == 41);
  assert(iopy.RangeAttack() == 0);
  iopy.RestorePower();
  iopy.RestorePower();
  iopy.TakeDamage(97);
  iopy.Heal();
  assert(iopy.getPv() == 73);
  for (int i = 0; i < 9; i++) {
    iopy.Heal();
    assert(iopy.getPv() == 100);
  }
  iopy.TakeDamage(97);
  iopy.Heal();
  assert(iopy.getPv() == 3);
}

int main()

{
  testMage();
  testPriest();
  return 0;
}

/* Sortie attendue (./a.out | cat -e) :
   Sully Created$
   Sully teleported$
   Jean Created$
   Jean teleported$
   Sully blinks$
   Sully blinks$
   Sully blinks$
   Sully blinks$
   Sully blinks$
   Sully blinks$
   Sully blinks$
   Sully blinks$
   Sully blinks$
   Sully blinks$
   Sully out of power$
   Sully takes a mana potion$
   Sully takes a mana potion$
   Sully takes a mana potion$
   Sully launches a fire ball$
   Sully launches a fire ball$
   Sully launches a fire ball$
   Sully launches a fire ball$
   Sully out of power$
   Sully takes 97 damage$
   Sully takes a potion$
   Sully takes a potion$
Sully takes a potion$
Iopy Created$
Iopy teleported$
Iopy enters in the order$
Romain Created$
Romain teleported$
Romain enters in the order$
Iopy uses a spirit explosion$
Iopy uses a spirit explosion$
Iopy uses a spirit explosion$
Iopy uses a spirit explosion$
Iopy uses a spirit explosion$
Iopy uses a spirit explosion$
Iopy uses a spirit explosion$
Iopy uses a spirit explosion$
Iopy uses a spirit explosion$
Iopy uses a spirit explosion$
Iopy out of power$
Iopy takes a mana potion$
Iopy takes a mana potion$
Iopy takes a mana potion$
Iopy launches a fire ball$
Iopy launches a fire ball$
Iopy launches a fire ball$
Iopy launches a fire ball$
Iopy out of power$
Iopy takes a mana potion$
Iopy takes a mana potion$
Iopy takes 97 damage$
Iopy casts a little heal spell$
Iopy casts a little heal spell$
Iopy casts a little heal spell$
Iopy casts a little heal spell$
Iopy casts a little heal spell$
Iopy casts a little heal spell$
Iopy casts a little heal spell$
Iopy casts a little heal spell$
Iopy casts a little heal spell$
Iopy casts a little heal spell$
Iopy takes 97 damage$
Iopy out of power$
*/
