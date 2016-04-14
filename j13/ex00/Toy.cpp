//
// Toy.cpp for  in /home/simomb_s/piscine_cpp_d13/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 18 09:26:32 2016 stephanedarcy simomba
// Last update Mon Jan 18 10:41:38 2016 stephanedarcy simomba
//

#include <fstream>
#include "Toy.h"

Toy::Toy() : _type(BASIC_TOY), _name("toy"), _picture()
{
}

Toy::Toy(Toy::ToyType type, std::string const &name, std::string const &file) : _type(type), _name(name), _picture(file)
{
}

Toy::~Toy()
{
}

Toy::ToyType		Toy::getType() const
{
  return _type;
}

std::string	Toy::getName() const
{
  return _name;
}

void		Toy::setName(std::string const &name)
{
  _name = name;
}

bool		Toy::setAscii(std::string const &file)
{
  _picture.getPictureFromFile(file);
  if (_picture.getData() == "ERROR")
    return (false);
  return (true);
}

std::string	Toy::getAscii() const
{
  return _picture.getData();
}
