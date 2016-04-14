/*
** Woody.h for  in /home/simomb_s/piscine_cpp_d13/ex02
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Jan 18 12:04:37 2016 stephanedarcy simomba
** Last update Mon Jan 18 18:26:14 2016 stephanedarcy simomba
*/

#include <iostream>
#include <string>
#include "Toy.h"

class Woody : public Toy
{
 public:
  Woody(std::string const &name, std::string const &file = "woody.txt");
  ~Woody();
};
