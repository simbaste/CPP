/*
** Fruit.h for  in /home/simomb_s/piscine_cpp_d14m
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Jan 19 10:14:04 2016 stephanedarcy simomba
** Last update Tue Jan 19 18:54:02 2016 stephanedarcy simomba
*/

#ifndef FRUIT_H_
# define FRUIT_H_

# include <iostream>
# include <string>

class Fruit
{
 protected:
  int		_vitamins;
  std::string	_name;

 public:
  Fruit();
  virtual ~Fruit();
  virtual int		getVitamins() const;
  virtual std::string	getName() const = 0;
};

#endif /* FRUIT_H_ */
