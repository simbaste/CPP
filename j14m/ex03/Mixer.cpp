//
// Mixer.cpp for  in /home/simomb_s/piscine_cpp_d14m/ex03
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 20 05:22:57 2016 stephanedarcy simomba
// Last update Wed Jan 20 05:40:10 2016 stephanedarcy simomba
//

#include "Mixer.h"

static int testMixer(FruitBox& box)
{
  Fruit const *fruit;
  int	vit;

  vit = 0;
  while ((fruit = box.pickFruit()) != 0)
    vit += fruit->getVitamins();
  return vit;
}

Mixer::Mixer()
{
  _plugged = true;
  _mixfunc = &testMixer;
}

Mixer::~Mixer()
{
}
