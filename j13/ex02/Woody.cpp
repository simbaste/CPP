//
// Woody.cpp for  in /home/simomb_s/piscine_cpp_d13/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 18 12:05:31 2016 stephanedarcy simomba
// Last update Mon Jan 18 12:11:10 2016 stephanedarcy simomba
//

#include "Woody.h"

Woody::Woody(std::string const &name, std::string const &file)
  : Toy(Toy::BUZZ, name, file)
{
}

Woody::~Woody()
{
}
