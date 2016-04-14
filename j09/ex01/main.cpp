#include <iostream>
#include "Warrior.hh"

//
// ex01.cpp for piscine_cpp_d09 in /home/campio_j/work/piscine/09/rendu
//
// Made by Julien Campion
// Login   <campio_j@epitech.net>
//
// Started on  Thu Jan 14 13:58:20 2016 Julien Campion
// Last update Thu Jan 14 22:10:38 2016 stephanedarcy simomba
//

#include <cassert>
#include "Warrior.hh"

int main()
{
  Warrior thor("Thor", 42);
  Warrior const johnCena("JOHN CENA", 84);
  Warrior chuckNorris("Chuck Norris", 1337, "thumb");

  assert(thor.getName() == "Thor");
  assert(johnCena.getName() == "JOHN CENA");
  assert(thor.getLvl() == 42);
  assert(johnCena.getLvl() == 84);

  assert(thor.RangeAttack() == 0);
  thor.Range = Character::RANGE;
  assert(thor.CloseAttack() == 0);
  thor.Range = Character::CLOSE;

  chuckNorris.CloseAttack();
  for (int i = 0; i < 3; i++) {
      assert(thor.CloseAttack() == 32);
    }
  assert(thor.CloseAttack() == 0);

  thor.RestorePower();
  assert(thor.getPower() == 100);

  thor.Range = Character::RANGE;
  assert(thor.RangeAttack() == 0);
  assert(thor.Range == Character::CLOSE);
  for (int i = 0; i < 10; i++) {
    thor.Range = Character::RANGE;
    assert(thor.RangeAttack() == 0);
  }
  assert(thor.getPower() == 0);

  thor.Heal();
  assert(thor.getPv() == 100);

  thor.TakeDamage(75);
  assert(thor.getPv() == 25);
  thor.Heal();
  assert(thor.getPv() == 75);
  thor.Heal();
  assert(thor.getPv() == 100);
  thor.Heal();
  assert(thor.getPv() == 100);
  return 0;
}

/* Sortie attendue (./a.out | cat -e) :
   Thor Created$
   I'm Thor KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG$
   JOHN CENA Created$
   I'm JOHN CENA KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG$
   Chuck Norris Created$
   I'm Chuck Norris KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG$
   Chuck Norris strikes with his thumb$
   Thor strikes with his hammer$
   Thor strikes with his hammer$
   Thor strikes with his hammer$
   Thor out of power$
   Thor eats$
   Thor intercepts$
   Thor intercepts$
   Thor intercepts$
   Thor intercepts$
   Thor intercepts$
   Thor intercepts$
   Thor intercepts$
   Thor intercepts$
   Thor intercepts$
   Thor intercepts$
   Thor out of power$
   Thor takes a potion$
   Thor takes 75 damage$
   Thor takes a potion$
   Thor takes a potion$
   Thor takes a potion$
*/
