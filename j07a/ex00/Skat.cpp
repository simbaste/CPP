//
// Skat.cpp for  in /home/simomb_s/piscine_cpp_d07a/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 13 09:09:23 2016 stephanedarcy simomba
// Last update Wed Jan 13 09:39:23 2016 stephanedarcy simomba
//

#include <string>
#include <iostream>
#include "Skat.h"

Skat::Skat(std::string const &name, int stimPaks) : _name(name), _stimPaks(stimPaks)
{
}

Skat::~Skat()
{
}

unsigned int&	Skat::stimPaks()
{
  return _stimPaks;
}

const std::string&	Skat::name()
{
  return this->_name;
}

void	Skat::shareStimPaks(int number, int& stock)
{
  if (number > this->_stimPaks)
    std::cout << "Don’t be greedy" << std::endl;
  else
    {
      stock += number;
      this->_stimPaks -= number;
      std::cout << "Keep the change." << std::endl;
    }
}

void	Skat::addStimPaks(unsigned int number)
{
  if (number == 0)
    std::cout << "Hey boya, did you forget something ?" << std::endl;
  else
    this->_stimPaks += number;
}

void	Skat::useStimPaks()
{
  if (this->_stimPaks > 0)
    {
      this->_stimPaks--;
      std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    }
  else
      std::cout << "Mediiiiiic" << std::endl;
}

void	Skat::status()
{
  std::cout << "Soldier " << this->_name << " reporting " << this->_stimPaks << " stimpaks remaining sir !" << std::endl;
}
