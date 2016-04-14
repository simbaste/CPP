/*
** LittleHand.h for  in /home/simomb_s/piscine_cpp_d14m/ex01
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Jan 19 16:07:57 2016 stephanedarcy simomba
** Last update Tue Jan 19 17:59:22 2016 stephanedarcy simomba
*/

#ifndef LITTLEHAND_H_
# define LITTLEHAND_H_

#include <iostream>
#include <string>
#include "Lemon.h"
#include "Banana.h"
#include "FruitBox.h"
#include "Lime.h"

class LittleHand
{
 public:
    LittleHand();
  ~LittleHand();
  static void	sortFruitBox(FruitBox &unsorted,
		     FruitBox &lemons,
		     FruitBox &bananas,
		     FruitBox &limes);
};

#endif /* LITTLEHAND_H_ */
