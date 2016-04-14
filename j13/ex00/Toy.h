/*
** Toy.h for  in /home/simomb_s/piscine_cpp_d13/ex00
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Jan 18 06:38:07 2016 stephanedarcy simomba
** Last update Mon Jan 18 10:27:20 2016 stephanedarcy simomba
*/

#ifndef TOY_H_
# define TOY_H_

#include <iostream>
#include <string>
#include "Picture.h"

class Toy
{
 public:
  typedef enum	ToyType
  {
    BASIC_TOY,
    ALIEN
  }		ToyType;
 private:
  ToyType	_type;
  std::string	_name;
  Picture	_picture;

 public:
  Toy();
  Toy(ToyType type, std::string const &name, std::string const &file);
  ~Toy();
  ToyType	getType() const;
  std::string	getName() const;
  void		setName(std::string const &name);
  bool		setAscii(std::string const &data);
  std::string	getAscii() const;
};

#endif /* !TOY_H_ */
