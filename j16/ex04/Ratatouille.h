/*
** Ratatouille.h for  in /home/simomb_s/piscine_cpp_d16/ex04
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Jan 21 17:21:09 2016 stephanedarcy simomba
** Last update Thu Jan 21 18:01:44 2016 stephanedarcy simomba
*/

#ifndef RATATOUILLE_H_
# define RATATOUILLE_H_

#include <iostream>
#include <string>
#include <sstream>

class Ratatouille
{
 private:
  std::stringstream	_ratatouille;
  std::string		_res;

 public:
  Ratatouille();
  Ratatouille(Ratatouille const &);
  ~Ratatouille();
  Ratatouille	&operator=(const Ratatouille &);

  Ratatouille	&addVegetable(unsigned char);
  Ratatouille	&addCondiment(unsigned int);
  Ratatouille	&addSpice(double);
  Ratatouille	&addSauce(const std::string &);
  std::string	kooc(void);
};

#endif /* RATATOUILLE_H_ */
