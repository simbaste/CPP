//
// Victim.cpp for  in /home/simomb_s/piscine_cpp_d10/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 12:20:49 2016 stephanedarcy simomba
// Last update Fri Jan 15 14:16:20 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "Victim.hh"

Victim::Victim(std::string const &name) : _name(name)
{
  std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim()
{
  std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

std::string	Victim::getName() const
{
  return (_name);
}

std::ostream	&operator<<(std::ostream &os, Victim const &Vict)
{
  os << "I'm " << Vict.getName() << " and i like otters !"  << std::endl;
  return (os);
}

void	Victim::getPolymorphed() const
{
  std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}
