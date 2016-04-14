//
// droid.cpp for  in /home/simomb_s/piscine_cpp_d08/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 13 00:26:36 2016 stephanedarcy simomba
// Last update Thu Jan 14 09:11:24 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "droid.hh"
#include "droidmemory.hh"

Droid::Droid(std::string matricule)
  : Id(matricule), Energy(50), Attack(25), Toughness(15),
    Status(new std::string("Standing by")), BattleData(new DroidMemory)
{
  std::cout << "Droid '" << this->Id << "' Activated" << std::endl;
}

Droid::Droid(Droid const& droid)
  : Id(droid.Id), Energy(droid.Energy), Attack(droid.Attack),
    Toughness(droid.Toughness), Status(new std::string(*(droid.Status)))
{
  std::cout << "Droid '" << this->Id << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
  delete this->Status;
  std::cout << "Droid '" << this->Id << "' Destroyed" << std::endl;
}

std::string	Droid::getId() const
{
  return this->Id;
}

size_t	Droid::getEnergy() const
{
  return this->Energy;
}

size_t	Droid::getAttack() const
{
  return this->Attack;
}

size_t	Droid::getToughness() const
{
  return this->Toughness;
}

std::string	*Droid::getStatus() const
{
  return this->Status;
}

DroidMemory	*Droid::getBattleData() const
{
  return this->BattleData;
}

void		Droid::setBattleData(DroidMemory *mem)
{
  this->BattleData = mem;
}

void	Droid::setId(std::string const matricule)
{
  this->Id = matricule;
}

void	Droid::setEnergy(size_t const energy)
{
  if (energy > 100)
    this->Energy = 100;
  else
    this->Energy = energy;
}

void	Droid::setStatus(std::string *status)
{
  delete this->Status;
  this->Status = status;
}

bool	Droid::operator==(Droid const &droid) const
{
  if (*(this->Status) == *(droid.Status))
    return (true);
  return (false);
}

bool	Droid::operator!=(Droid const &droid) const
{
  if (*(this->Status) != *(droid.Status))
    return (true);
  return (false);
}

Droid&	Droid::operator=(Droid const &droid)
{
  if (this != &droid)
    {
      this->Id = droid.Id;
      this->Energy = droid.Energy;
      this->Status = new std::string(*(droid.Status));
    }
  return *this;
}

std::ostream&	operator<<(std::ostream &os, Droid const &droid)
{
  os << "Droid '" << droid.getId() << "', " << (*droid.getStatus()) << ", " << droid.getEnergy();
  return os;
}

Droid&		Droid::operator<<(size_t& energy)
{
  size_t	nb;

  nb = 100 - this->Energy;
  if (energy > nb)
    {
      this->Energy += nb;
      energy -= nb;
    }
  else
    {
      this->Energy += energy;
      energy = 0;
    }
  return *this;
}
