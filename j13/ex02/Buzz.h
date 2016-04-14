/*
** Buzz.h for  in /home/simomb_s/piscine_cpp_d13/ex02
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Jan 18 11:40:38 2016 stephanedarcy simomba
** Last update Mon Jan 18 18:26:16 2016 stephanedarcy simomba
*/

#include <iostream>
#include <string>
#include "Toy.h"

class Buzz : public Toy
{
 public:
  Buzz(std::string const &name, std::string const &file = "buzz.txt");
  ~Buzz();
};
