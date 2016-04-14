//
// Peon.cpp for  in /home/simomb_s/piscine_cpp_d10/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 12:59:08 2016 stephanedarcy simomba
// Last update Fri Jan 15 13:36:18 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "Peon.hh"

Peon::Peon(std::string const &name) : Victim(name)
{
  std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
  std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const
{
  std::cout << _name << " has been turned into a pink pony !" << std::endl;
}
