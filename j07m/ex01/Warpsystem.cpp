//
// Warpsystem.cpp for  in /home/simomb_s/piscine_cpp_d07m/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 12 12:10:03 2016 stephanedarcy simomba
// Last update Tue Jan 12 14:49:14 2016 stephanedarcy simomba
//

#include <string>
#include <iostream>
#include "Warpsystem.hh"

WarpSystem::QuantumReactor::QuantumReactor()
{
  this->_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{

}

bool	WarpSystem::QuantumReactor::isStable()
{
  return (this->_stability);
}

void	WarpSystem::QuantumReactor::setStability(bool stability)
{
  this->_stability = stability;
}

WarpSystem::Core::Core(QuantumReactor *core)
{
  this->_coreReactor = core;
}

WarpSystem::Core::~Core()
{

}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor()
{
  return (this->_coreReactor);
}
