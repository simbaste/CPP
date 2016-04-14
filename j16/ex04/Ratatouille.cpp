//
// Ratatouille.cpp for  in /home/simomb_s/piscine_cpp_d16/ex04
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 21 17:30:38 2016 stephanedarcy simomba
// Last update Thu Jan 21 18:01:23 2016 stephanedarcy simomba
//

#include "Ratatouille.h"

Ratatouille::Ratatouille()
{
}

Ratatouille::Ratatouille(const Ratatouille &ra)
{
  _ratatouille.str("");
  _ratatouille << std::string(ra._ratatouille.str());
}

Ratatouille::~Ratatouille()
{
}

Ratatouille	&Ratatouille::operator=(const Ratatouille &ra)
{
  _ratatouille.str("");
  _ratatouille << std::string(ra._ratatouille.str());
  return (*this);
}

Ratatouille	&Ratatouille::addVegetable(unsigned char a)
{
  _ratatouille << a;
  return (*this);
}

Ratatouille	&Ratatouille::addCondiment(unsigned int a)
{
  _ratatouille << a;
  return (*this);
}

Ratatouille	&Ratatouille::addSpice(double a)
{
  _ratatouille << a;
  return (*this);
}

Ratatouille	&Ratatouille::addSauce(const std::string &str)
{
  _ratatouille << str;
  return *this;
}

std::string	Ratatouille::kooc(void)
{
  return std::string(_ratatouille.str());
}
