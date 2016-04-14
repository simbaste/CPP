//
// Victim.hh for  in /home/simomb_s/piscine_cpp_d10/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 12:20:46 2016 stephanedarcy simomba
// Last update Fri Jan 15 14:21:17 2016 stephanedarcy simomba
//

#ifndef VICTIM_H_
# define VICTIM_H_

#include <iostream>
#include <string>

class Victim
{
protected:
  std::string _name;
public:
  Victim(std::string const &name);
  ~Victim();
  std::string getName() const;
  virtual void	getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &os, Victim const &Vic);

#endif /* VICTIM_H_ */
