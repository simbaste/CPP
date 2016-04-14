//
// Sorcerer.cpp for  in /home/simomb_s/piscine_cpp_d10/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 12:09:37 2016 stephanedarcy simomba
// Last update Fri Jan 15 14:29:51 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "Victim.hh"
#include "Sorcerer.hh"

Sorcerer::Sorcerer(std::string const &name, std::string const &title)
  : _name(name), _title(title)
{
  std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
  std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string	Sorcerer::getName() const
{
  return (_name);
}

std::string	Sorcerer::getTitle() const
{
  return (_title);
}

std::ostream	&operator<<(std::ostream &os, Sorcerer const &Sorcer)
{
  os << "I am " << Sorcer.getName() << ", " << Sorcer.getTitle() << ", and I like ponies !" << std::endl;
  return (os);
}

void	Sorcerer::polymorph(Victim const &Vic) const
{
  Vic.getPolymorphed();
}
