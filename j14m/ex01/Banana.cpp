//
// Banana.cpp for  in /home/simomb_s/piscine_cpp_d14m
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 19 10:49:28 2016 stephanedarcy simomba
// Last update Tue Jan 19 11:00:19 2016 stephanedarcy simomba
//

#include "Banana.h"

Banana::Banana() : Fruit()
{
  _vitamins = 5;
  _name = "banana";
}

Banana::~Banana()
{
}

int	Banana::getVitamins() const
{
  return _vitamins;
}

std::string	Banana::getName() const
{
  return _name;
}
