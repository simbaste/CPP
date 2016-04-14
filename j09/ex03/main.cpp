

#include <cassert>

#include "Paladin.hh"

#include "Character.hh"
#include "Mage.hh"
#include "Warrior.hh"
int main()

{

  Paladin bibi("Bibi", 42);

  Paladin const zeus("Sadirac", 43);

  assert(bibi.getName() == "Bibi");

  assert(zeus.getName() == "Sadirac");

  assert(bibi.getLvl() == 42);

  assert(zeus.getLvl() == 43);

  for (int i = 0; i < 3; i++)

    assert(bibi.CloseAttack() == 29);

  assert(bibi.CloseAttack() == 0);

  bibi.RestorePower();

  assert(bibi.getPower() == 100);

  bibi.Range = Character::RANGE;

  for (int i = 0; i < 4; i++)

    assert(bibi.RangeAttack() == 30);

  assert(bibi.RangeAttack() == 0);

  bibi.RestorePower();

  bibi.TakeDamage(97);

  bibi.Heal();

  assert(bibi.getPv() == 73);

  for (int i = 0; i < 9; i++) {

    bibi.Heal();

    assert(bibi.getPv() == 100);

  }

  bibi.TakeDamage(97);

  bibi.Heal();

  assert(bibi.getPv() == 3);

  bibi.RestorePower();

  for (int i = 0; i < 10; i++) {

    bibi.Range = Character::RANGE;

    assert(bibi.Intercept() == 0);

    assert(bibi.Range == Character::CLOSE);

  }

  bibi.Range = Character::RANGE;

  assert(bibi.Intercept() == 0);

  assert(bibi.Range == Character::RANGE);

  assert(bibi.getPower() == 0);

  return 0;

}

/* Sortie attendue (./a.out | cat -e) :

Bibi Created$

I'm Bibi KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG$

Bibi teleported$

Bibi enters in the order$

the light falls on Bibi$

Sadirac Created$

I'm Sadirac KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG$

Sadirac teleported$

Sadirac enters in the order$

the light falls on Sadirac$

Bibi strikes with his hammer$

Bibi strikes with his hammer$

Bibi strikes with his hammer$

Bibi out of power$

Bibi eats$

Bibi launches a fire ball$

Bibi launches a fire ball$

Bibi launches a fire ball$

Bibi launches a fire ball$

Bibi out of power$

Bibi eats$

Bibi takes 97 damage$

Bibi casts a little heal spell$

Bibi casts a little heal spell$

Bibi casts a little heal spell$

Bibi casts a little heal spell$

Bibi casts a little heal spell$

Bibi casts a little heal spell$

Bibi casts a little heal spell$

Bibi casts a little heal spell$

Bibi casts a little heal spell$

Bibi casts a little heal spell$

Bibi takes 97 damage$

Bibi out of power$

Bibi eats$

Bibi intercepts$

Bibi intercepts$

Bibi intercepts$

Bibi intercepts$

Bibi intercepts$

Bibi intercepts$

Bibi intercepts$

Bibi intercepts$

Bibi intercepts$

Bibi intercepts$

Bibi out of power$

*/

