//
// Toy.cpp for  in /home/simomb_s/piscine_cpp_d13/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 18 09:26:32 2016 stephanedarcy simomba
// Last update Mon Jan 18 18:06:02 2016 stephanedarcy simomba
//

#include <iostream>
#include <fstream>
#include "Toy.h"

Toy::Toy() :  _type(BASIC_TOY), _name("toy"), _picture()
{
}

Toy::Toy(Toy::ToyType type, std::string const &name, std::string const &file) : _type(type), _name(name), _picture(file)
{
}

Toy::Toy(Toy const &cls)
{
  _type = cls.getType();
  _name = cls.getName();
  _picture = cls.getPicture();
}

Toy::~Toy()
{
}

Toy		&Toy::operator=(Toy const &cls)
{
  _type = cls.getType();
  _name = cls.getName();
  _picture = cls.getPicture();
  return (*this);
}

Picture		Toy::getPicture() const
{
  return _picture;
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
    {
      my_err.type = Toy::Error::PICTURE;
      return (false);
    }
  return (true);
}

std::string	Toy::getAscii() const
{
  return _picture.getData();
}

void	Toy::speak(std::string const &str)
{
  std::cout << _name << " \"" << str << "\"" << std::endl;
}

bool	Toy::speak_es(std::string const &str)
{
  std::cout << _name << " \"" << str << "\"" << std::endl;
  return (true);
}

std::ostream	&operator<<(std::ostream &os, Toy const &cls)
{
  os << cls.getName() << "\n" << cls.getPicture().getData() << std::endl;
  return (os);
}

Toy		&Toy::operator<<(std::string const &data)
{
  this->_picture._data = data;
  return (*this);
}

Toy::Error::Error()
{
}

Toy::Error::~Error()
{
}

Toy::Error	Toy::getLastError()
{
  return my_err;
}

std::string	Toy::Error::what()
{
  if (type == PICTURE)
    return ("bad new illustration");
  else if (type == SPEAK)
    return ("wrong mode");
  return ("");
}

std::string	Toy::Error::where()
{
  if (type == PICTURE)
    return ("setAscii");
  else if (type == SPEAK)
    return ("speak_es");
  return("");
}
