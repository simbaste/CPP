//
// main.cpp for  in /home/simomb_s/piscine_cpp_d16/ex04
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 21 17:42:39 2016 stephanedarcy simomba
// Last update Thu Jan 21 18:03:41 2016 stephanedarcy simomba
//

#include "Ratatouille.h"

int	main()
{
  Ratatouille rata;

  rata.addSauce("Tomato").addCondiment(42).addSpice(123.321);
  rata.addVegetable('x');
  std::cout << "We taste: " << rata.kooc() << std::endl;
  rata.addSauce("Bolognese");
  rata.addSpice(3.14);
  std::cout << "C'mon, taste that: " << rata.kooc() << std::endl;
  Ratatouille glurp(rata);
  glurp.addVegetable('p');
  glurp.addVegetable('o');
  glurp.addSauce("Tartar");
  std::cout << "And now: " << glurp.kooc() << std::endl;
  rata = glurp;
  std::cout << "I'll taste again, it’s sooo good: " << rata.kooc() << std::
    endl;
  return 0;
}
