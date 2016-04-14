//
// Fruit.cpp for  in /home/simomb_s/piscine_cpp_d14m
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 19 10:17:20 2016 stephanedarcy simomba
// Last update Tue Jan 19 18:11:38 2016 stephanedarcy simomba
//

#include "Fruit.h"

Fruit::Fruit()
{
}

Fruit::~Fruit()
{
}

int		Fruit::getVitamins() const
{
  return _vitamins;
}

std::string	Fruit::getName() const
{
  return _name;
}
