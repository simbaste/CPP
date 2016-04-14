//
// Federation.cpp for  in /home/simomb_s/piscine_cpp_d07m/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 12 10:46:03 2016 stephanedarcy simomba
// Last update Tue Jan 12 18:34:44 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "Federation.hh"

Borg::Starfleet::Ship::Ship() : _size(300), _maxWarp(9)
{
  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl;
  std::cout << "Your biological characteristics and technologies will be assimilated." << std::endl;
  std::cout << "Resistance is futile." << std::endl;
}

Borg::Ship::Ship() : _length(300), _maxWarp(1)
{
  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl;
  std::cout << "Your biological characteristics and technologies will be assimilated." << std::endl;
  std::cout << "Resistance is futile." << std::endl;
}

Borg::Capitain::Captain(std::string name)
{
  this->_name = name;
}

Borg::Captain::~Captain()
{

}

std::string	Borg::Captain::getName()
{
  return (this->_name);
}

int		Borg::Captain::getAge()
{
  return (this->_age);
}

void		Borg::Captain::SetAge(int age);
{
  this->_age = age;
}
