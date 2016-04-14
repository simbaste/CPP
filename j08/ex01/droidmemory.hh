//
// droidmemory.hh for  in /home/simomb_s/piscine_cpp_d08/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 13 14:46:56 2016 stephanedarcy simomba
// Last update Thu Jan 14 08:13:20 2016 stephanedarcy simomba
//

#ifndef DROIDMEMORY_H_
# define DROIDMEMORY_H_

#include <string>
#include <iostream>

class DroidMemory
{
private:
  size_t	FingerPrint;
  size_t	Exp;
public:
  DroidMemory();
  ~DroidMemory();
  size_t	getFingerPrint() const;
  size_t	getExp() const;
  void		setFingerPrint(size_t);
  void		setExp(size_t);
  DroidMemory	&operator<<(DroidMemory const &);
  DroidMemory	&operator>>(DroidMemory &);
  DroidMemory	&operator+=(DroidMemory const &);
  DroidMemory	&operator+=(size_t const);
  DroidMemory	operator+(DroidMemory const &);
  DroidMemory	operator+(size_t const);
};

std::ostream	&operator<<(std::ostream &os, DroidMemory const &mem);

#endif /* DROIDMEMORY_H_ */
