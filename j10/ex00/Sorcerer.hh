//
// Sorcerer.hh for  in /home/simomb_s/piscine_cpp_d10/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 15 12:03:54 2016 stephanedarcy simomba
// Last update Fri Jan 15 14:05:30 2016 stephanedarcy simomba
//

#ifndef SORCERER_H_
# define SORCERER_H_

#include <iostream>
#include <string>
#include "Victim.hh"

class Sorcerer
{
private:
  std::string _name;
  std::string _title;
public:
  Sorcerer(std::string const &name, std::string const &title);
  ~Sorcerer();
  void	polymorph(Victim const &) const;
  std::string	getName() const;
  std::string	getTitle() const;
};

std::ostream	&operator<<(std::ostream &os, Sorcerer const &Sorcer);

#endif /* SORCERER_H_ */
