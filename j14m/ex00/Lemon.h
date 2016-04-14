/*
** Lemon.h for  in /home/simomb_s/piscine_cpp_d14m
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Jan 19 10:30:52 2016 stephanedarcy simomba
** Last update Tue Jan 19 11:06:01 2016 stephanedarcy simomba
*/

#ifndef LEMON_H_
# define LEMON_H_

#include "Fruit.h"

class Lemon : public Fruit
{
 public:
  Lemon();
  ~Lemon();
  int		getVitamins() const;
  std::string	getName() const;
};

#endif /* LEMON_H_ */
