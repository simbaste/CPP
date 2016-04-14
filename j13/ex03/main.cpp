//
// main.cpp for  in /home/simomb_s/piscine_cpp_d13/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 18 12:08:12 2016 stephanedarcy simomba
// Last update Mon Jan 18 12:53:42 2016 stephanedarcy simomba
//

#include <iostream>
#include "Buzz.h"
#include "Woody.h"
#include "Toy.h"

int	main()
{
  Toy *b = new Buzz("buzziiiii");
  Toy *w = new Woody("wood");
  Toy *t = new Toy(Toy::ALIEN, "ET", "alien.txt");

  b->speak("To the code, and beyond !!!!!!!!");
  w->speak("There’s a snake in my boot.");
  t->speak("the claaaaaaw");
  return (0);
}
