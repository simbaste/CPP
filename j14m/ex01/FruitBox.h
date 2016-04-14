/*
** FruitBox.h for  in /home/simomb_s/piscine_cpp_d14m
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Jan 19 11:11:50 2016 stephanedarcy simomba
** Last update Tue Jan 19 12:33:16 2016 stephanedarcy simomba
*/

#ifndef FRUITBOX_H_
# define FRUITBOX_H_

#include "Fruit.h"
#include "FruitNode.h"

class FruitBox
{
 private:
  int		_size;
  int		_nb;
  FruitNode	*list;

 public:
  FruitBox(int size);
  ~FruitBox();
  int		nbFruits() const;
  bool		putFruit(Fruit *f);
  Fruit		*pickFruit();
  FruitNode	*head() const;
};

#endif /* FRUITBOX_H_ */
