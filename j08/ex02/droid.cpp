//
// droid.cpp for  in /home/simomb_s/piscine_cpp_d08/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 13 00:26:36 2016 stephanedarcy simomba
// Last update Wed Jan 13 19:42:56 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "droid.hh"
#include "droidmemory.hh"

Droid::Droid(std::string matricule)
  : Id(matricule), Energy(50), Attack(25), Toughness(15),
    Status(new std::string("Standing by")), BattleMemory(new DroidMemory)
{
  std::cout << "Droid '" << this->Id << "' Activated" << std::endl;
}

Droid::Droid(Droid const& droid)
  : Id(droid.Id), Energy(50), BattleMemory(new DroidMemory(*droid.BattleMemory)), Attack(droid.Attack),
    Toughness(droid.Toughness), Status(new std::string(*(droid.Status)))
{
  std::cout << "Droid '" << this->Id << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
  delete this->Status;
  delete this->BattleMemory;
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

DroidMemory	*Droid::getBattleMemory()
{
  return this->BattleMemory;
}

void		Droid::setBattleMemory(DroidMemory *mem)
{
  this->BattleMemory = mem;
}

void	Droid::setId(std::string matricule)
{
  this->Id = matricule;
}

void	Droid::setEnergy(size_t energy)
{
  this->Energy = energy;
}

void	Droid::setStatus(std::string *status)
{
  delete this->Status;
  this->Status = status;
}

bool	Droid::operator==(Droid &droid) const
{
  if (this->Status == droid.Status)
    return (true);
  return (false);
}

bool	Droid::operator!=(Droid &droid) const
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
      this->BattleMemory = new DroidMemory(*droid.BattleMemory);
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

bool	Droid::operator()(std::string *tache, size_t Exp)
{
  if (this->Energy > 10)
    {
      std::string *new_str = new std::string(*tache);
      if (this->BattleMemory->getExp() >= Exp)
	{
	  this->Energy -= 10;
	  this->BattleMemory->setExp(this->BattleMemory->getExp() + (Exp / 2));
	  *new_str += " - Completed!";
	  this->setStatus(new_str);
	}
      else
	{
	  this->BattleMemory->setExp(this->BattleMemory->getExp() + Exp);
	  *new_str += " - Failed!";
	  this->setStatus(new_str);
	  return (false);
	}
    }
  this->Energy = 0;
  this->setStatus(new std::string("Battery Low"));
  return (false);
}
