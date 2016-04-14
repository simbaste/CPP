//
// main.cpp for main in /home/sida_b/rendu/tek2/piscine_cpp_d14m/ex01
//
// Made by benoit sida
// Login   <sida_b@epitech.net>
//
// Started on  Tue Jan 19 09:24:13 2016 benoit sida
// Last update Tue Jan 19 19:43:20 2016 stephanedarcy simomba
//

#include <iostream>
#include "Fruit.h"
#include "Lemon.h"
#include "Banana.h"
#include "FruitBox.h"
#include "Lime.h"
#include "LittleHand.h"

bool		pickAFruit(FruitBox &c)
{
  Fruit		*f;

  f = c.pickFruit();
  if (!f)
    {
      std::cout << "Picking out a fruit ... There is no fruits !" << std::endl;
      return (false);
    }
  f->getVitamins();
  std::cout << "Picking out a fruit ... it's a " << f->getName() << " ! "
	    << "It contains " << f->getVitamins() << " vitamins !" << std::endl;
  delete f;
  return (true);
}

int		main(void)
{
  FruitBox	c(10);
  FruitBox	bananas(10);
  FruitBox	lemons(10);
  FruitBox	limes(10);

  std::cout << "The Fruitbox en vrac can contain 10 fruits." << std::endl;
  std::cout << "The Fruitbox en vrac actually contain " << c.nbFruits() << " fruits." << std::endl;
  std::cout << "Puting a banana ... " << (c.putFruit(new Banana()) ? "OK" : "KO") << std::endl;
  std::cout << "Puting a lemon ... " << (c.putFruit(new Lemon()) ? "OK" : "KO") << std::endl;
  std::cout << "Puting a lime ... " << (c.putFruit(new Lime()) ? "OK" : "KO") << std::endl;
  std::cout << "Puting a banana ... " << (c.putFruit(new Banana()) ? "OK" : "KO") << std::endl;
  std::cout << "Puting a lime ... " << (c.putFruit(new Lime()) ? "OK" : "KO") << std::endl;
  std::cout << "Puting a lemon ... " << (c.putFruit(new Lemon()) ? "OK" : "KO") << std::endl;
  std::cout << "The Fruitbox actually contain " << c.nbFruits() << " fruits." << std::endl;
  LittleHand::sortFruitBox(c, lemons, bananas, limes);
  std::cout << "The Fruitbox of Bananas actually contain " << bananas.nbFruits() << " fruits." << std::endl;
  while (pickAFruit(bananas));
  std::cout << "The Fruitbox of Lemons actually contain " << lemons.nbFruits() << " fruits." << std::endl;
  while (pickAFruit(lemons));
  std::cout << "The Fruitbox of limes actually contain " << limes.nbFruits() << " fruits." << std::endl;
  while (pickAFruit(limes));
  std::cout << "The Fruitbox of unsorted actually contain " << c.nbFruits() << " fruits." << std::endl;
  while (pickAFruit(c));
  return (0);
}
