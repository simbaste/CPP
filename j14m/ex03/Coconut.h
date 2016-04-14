/*
** Coconut.h for ù in /home/simomb_s/piscine_cpp_d14m/ex02
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Jan 20 04:19:57 2016 stephanedarcy simomba
** Last update Wed Jan 20 04:27:38 2016 stephanedarcy simomba
*/

#ifndef COCONUT_H_
# define COCONUT_H_

#include <iostream>
#include <string>
#include "Fruit.h"

class Coconut: public Fruit
{
 public:
  Coconut();
  ~Coconut();
  int		getVitamins() const;
  std::string	getName() const;
};

#endif /* COCONUT_H_ */
