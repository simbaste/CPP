//
// Coconut.cpp for  in /home/simomb_s/piscine_cpp_d14m/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 20 04:23:24 2016 stephanedarcy simomba
// Last update Wed Jan 20 04:27:58 2016 stephanedarcy simomba
//

#include "Coconut.h"

Coconut::Coconut() : Fruit()
{
  _vitamins = 15;
  _name = "coconut";
}

Coconut::~Coconut()
{
}

std::string	Coconut::getName() const
{
  return _name;
}

int	Coconut::getVitamins() const
{
  return _vitamins;
}
