//
// Peon.hh for  in /home/simomb_s/piscine_cpp_d10/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 12:58:58 2016 stephanedarcy simomba
// Last update Tue Mar 29 05:48:57 2016 stephanedarcy simomba
//

#ifndef PEON_H_
# define PEON_H_

#include <iostream>
#include <string>
#include "Victim.hh"

class Peon : public Victim
{
public:
  Peon(std::string const &name);
  ~Peon();
  void	getPolymorphed() const;
};

#endif /* PEON_H_ */
