/*
** LittleHand.h for  in /home/simomb_s/piscine_cpp_d14m/ex01
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Jan 19 16:07:57 2016 stephanedarcy simomba
** Last update Wed Jan 20 05:31:18 2016 stephanedarcy simomba
*/

#ifndef LITTLEHAND_H_
# define LITTLEHAND_H_

#include <iostream>
#include <string>
#include "Lemon.h"
#include "Banana.h"
#include "FruitBox.h"
#include "Lime.h"
#include "Coconut.h"
#include "Mixer.h"
#include "MixerBase.h"

class LittleHand
{
 public:
    LittleHand();
  ~LittleHand();
  static void	sortFruitBox(FruitBox &unsorted,
		     FruitBox &lemons,
		     FruitBox &bananas,
		     FruitBox &limes);
  static FruitBox * const * organizeCoconut(Coconut const * const * coconuts_packet);
  static void	plugMixer(MixerBase& mixer);
};

#endif /* LITTLEHAND_H_ */
