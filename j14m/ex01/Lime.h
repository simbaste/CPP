/*
** Lime.h for  in /home/simomb_s/piscine_cpp_d14m/ex01
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Jan 19 15:54:54 2016 stephanedarcy simomba
** Last update Tue Jan 19 16:07:11 2016 stephanedarcy simomba
*/

#ifndef LIME_H_
# define LIME_H_

#include <iostream>
#include <string>
#include "Lemon.h"

class Lime : public Lemon
{
 public:
  Lime();
  ~Lime();
  int		getVitamins() const;
  std::string	getName() const;
};

#endif /* LIME_H_ */
