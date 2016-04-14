//
// main.cpp for main in /home/sida_b/rendu/tek2/piscine_cpp_d14m/ex00
//
// Made by benoit sida
// Login   <sida_b@epitech.net>
//
// Started on  Tue Jan 19 09:15:48 2016 benoit sida
// Last update Tue Jan 19 19:46:00 2016 stephanedarcy simomba
//

#include <iostream>
#include "Fruit.h"
#include "Lemon.h"
#include "Banana.h"
#include "FruitBox.h"

bool		pickAFruit(FruitBox &c)
{
  Fruit	const	*f;

  f = c.pickFruit();
  if (!f)
    {
      std::cout << "Picking out a fruit ... There is no fruits !" << std::endl;
      return (false);
    }
  std::cout << "Picking out a fruit ... it's a " << f->getName() << " ! "
	    << "It contains " << f->getVitamins() << " vitamins !" << std::endl;
  delete f;
  return (true);
}

int		main(void)
{
  FruitBox	c(2);
  Banana	*b = new Banana;

  std::cout << "The FruitBox can contain 10 fruits." << std::endl;
  std::cout << "The FruitBox actually contain " << c.nbFruits() << " fruits." << std::endl;
  std::cout << "Puting a banana ... " << (c.putFruit(new Banana()) ? "OK" : "KO") << std::endl;
  std::cout << "Puting a lemon ... " << (c.putFruit(new Lemon()) ? "OK" : "KO") << std::endl;
  std::cout << "Puting a banana ... " << (c.putFruit(b) ? "OK" : "KO") << std::endl;
  std::cout << "Puting a banana ... " << (c.putFruit(b) ? "OK" : "KO") << std::endl;
  std::cout << "The FruitBox actually contain " << c.nbFruits() << " fruits." << std::endl;
  while (pickAFruit(c));
  std::cout << "The FruitBox actually contain " << c.nbFruits() << " fruits." << std::endl;
  std::cout << "Puting a lemon ... " << (c.putFruit(new Lemon()) ? "OK" : "KO") << std::endl;
  std::cout << "Puting a banana ... " << (c.putFruit(new Banana()) ? "OK" : "KO") << std::endl;
  std::cout << "First fruit in the fruitbox is a ... " << c.head()->fruit->getName() << "!" << std::endl;
  return (0);
}
