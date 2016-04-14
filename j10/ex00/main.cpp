//
// main.cpp for  in /home/simomb_s/piscine_cpp_d10/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 13:18:12 2016 stephanedarcy simomba
// Last update Fri Jan 15 14:17:17 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "Peon.hh"
#include "Victim.hh"
#include "Sorcerer.hh"

int main()
{
  Sorcerer robert("Robert", "the Magnificent");
  Victim jim("Jimmy");
  Peon joe("Joe");

  std::cout << robert << jim << joe;
  robert.polymorph(jim);
  robert.polymorph(joe);
  return 0;
}
