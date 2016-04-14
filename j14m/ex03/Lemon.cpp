//
// Lemon.cpp for  in /home/simomb_s/piscine_cpp_d14m
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 19 10:32:30 2016 stephanedarcy simomba
// Last update Tue Jan 19 11:01:00 2016 stephanedarcy simomba
//

#include "Lemon.h"

Lemon::Lemon() : Fruit()
{
  _vitamins = 3;
  _name = "lemon";
}

Lemon::~Lemon()
{
}

int	Lemon::getVitamins() const
{
  return _vitamins;
}

std::string	Lemon::getName() const
{
  return _name;
}
