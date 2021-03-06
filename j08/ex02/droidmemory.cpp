//
// droidmemory.cpp for  in /home/simomb_s/piscine_cpp_d08/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 13 14:50:23 2016 stephanedarcy simomba
// Last update Wed Jan 13 17:54:23 2016 stephanedarcy simomba
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include "droidmemory.hh"

DroidMemory::DroidMemory()
{
  this->Exp = 0;
  this->FingerPrint = random();
}

DroidMemory::~DroidMemory()
{
}

size_t		DroidMemory::getFingerPrint()
{
  return this->FingerPrint;
}

size_t		DroidMemory::getExp()
{
  return this->Exp;
}

void		DroidMemory::setExp(size_t Exp)
{
  this->Exp = Exp;
}

void		DroidMemory::setFingerPrint(size_t val)
{
  this->FingerPrint = val;
}

std::ostream	&operator<<(std::ostream &os, DroidMemory &mem)
{
  os << "DroidMemory '" << mem.getFingerPrint() << "', " << mem.getExp();
  return os;
}

DroidMemory	&DroidMemory::operator<<(DroidMemory &mem)
{
  this->Exp += mem.Exp;
  this->FingerPrint = FingerPrint ^ mem.FingerPrint;
  return *this;
}

DroidMemory	&DroidMemory::operator>>(DroidMemory &mem)
{
  mem.Exp += this->Exp;
  mem.FingerPrint = mem.FingerPrint ^ this->FingerPrint;
  return *this;
}

DroidMemory	&DroidMemory::operator+=(DroidMemory &mem)
{
  this->Exp += mem.Exp;
  this->FingerPrint = FingerPrint ^ mem.FingerPrint;
  return *this;
}

DroidMemory	&DroidMemory::operator+=(size_t val)
{
  this->Exp += val;
  this->FingerPrint = this->FingerPrint ^ val;
  return *this;
}

DroidMemory	DroidMemory::operator+(size_t val)
{
  DroidMemory	new_mem;

  new_mem.setExp(this->Exp + val);
  new_mem.setFingerPrint(this->FingerPrint ^ val);
  return new_mem;
}

DroidMemory	DroidMemory::operator+(DroidMemory &mem)
{
  DroidMemory	new_mem;

  new_mem.setExp(this->Exp + mem.Exp);
  new_mem.setFingerPrint(this->FingerPrint ^ mem.FingerPrint);
  return new_mem;
}

bool		DroidMemory::operator==(DroidMemory &mem)
{
  if (this->Exp == mem.Exp && this->FingerPrint == mem.FingerPrint)
    return (true);
  return (false);
}

bool		DroidMemory::operator!=(DroidMemory &mem)
{
  if (this->Exp != mem.Exp || this->FingerPrint != mem.FingerPrint)
    return (true);
  return (false);
}

bool		DroidMemory::operator<(DroidMemory &mem)
{
  if (this->Exp < mem.Exp)
    return (true);
  return (false);
}

bool		DroidMemory::operator>(DroidMemory &mem)
{
  if (this->Exp > mem.Exp)
    return (true);
  return (false);
}

bool		DroidMemory::operator<=(DroidMemory &mem)
{
  if (this->Exp <= mem.Exp)
    return (true);
  return (false);
}

bool		DroidMemory::operator>=(DroidMemory &mem)
{
  if (this->Exp >= mem.Exp)
    return (true);
  return (false);
}

bool		DroidMemory::operator<(size_t Exp)
{
  if (this->Exp < Exp)
    return (true);
  return (false);
}

bool		DroidMemory::operator>(size_t Exp)
{
  if (this->Exp > Exp)
    return (true);
  return (false);
}

bool		DroidMemory::operator<=(size_t Exp)
{
  if (this->Exp <= Exp)
    return (true);
  return (false);
}

bool		DroidMemory::operator>=(size_t Exp)
{
  if (this->Exp >= Exp)
    return (true);
  return (false);
}
