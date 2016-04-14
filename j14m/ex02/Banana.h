/*
** Banana.h for  in /home/simomb_s/piscine_cpp_d14m
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Jan 19 10:49:03 2016 stephanedarcy simomba
** Last update Tue Jan 19 11:05:44 2016 stephanedarcy simomba
*/

#ifndef BANANA_H_
# define BANANA_H_

#include "Fruit.h"

class Banana : public Fruit
{
 public:
  Banana();
  ~Banana();
  int		getVitamins() const;
  std::string	getName() const;
};

#endif /* BANANA_H_ */
