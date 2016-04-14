//
// Buzz.cpp for  in /home/simomb_s/piscine_cpp_d13/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 18 11:56:03 2016 stephanedarcy simomba
// Last update Mon Jan 18 12:59:04 2016 stephanedarcy simomba
//

#include "Buzz.h"

Buzz::Buzz(std::string const &name, std::string const &file)
  : Toy(Toy::BUZZ, name, file)
{
}

Buzz::~Buzz()
{
}

void	Buzz::speak(std::string const &str)
{
  std::cout << "BUZZ: " << _name << " \"" << str << "\"" << std::endl;
}
