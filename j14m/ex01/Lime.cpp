//
// Lime.cpp for  in /home/simomb_s/piscine_cpp_d14m/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 19 16:02:00 2016 stephanedarcy simomba
// Last update Tue Jan 19 17:48:51 2016 stephanedarcy simomba
//

#include "Lime.h"

Lime::Lime() : Lemon()
{
  _vitamins = 2;
  _name = "lime";
}

Lime::~Lime()
{
}

int		Lime::getVitamins() const
{
  return _vitamins;
}

std::string	Lime::getName() const
{
  return _name;
}
