//
// FruitBox.cpp for  in /home/simomb_s/piscine_cpp_d14m
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 19 11:28:49 2016 stephanedarcy simomba
// Last update Tue Jan 19 19:44:15 2016 stephanedarcy simomba
//

#include "FruitBox.h"

FruitBox::FruitBox(int size) : _size(size), _nb(0), list(NULL)
{
}

FruitBox::~FruitBox()
{
}

int		FruitBox::nbFruits() const
{
  return _nb;
}

bool		FruitBox::putFruit(Fruit *f)
{
  FruitNode	*tmp;
  FruitNode	*elem;
  int		nb(1);

    if (nb > _size)
      return (false);
  if (list == NULL)
    {
      list = new FruitNode;
      list->fruit = f;
      list->next = NULL;
      _nb++;
      return (true);
    }
  tmp = list;
  while (tmp->next != NULL)
    {
      if ((tmp->fruit == f) || (nb >= _size))
	return (false);
      nb++;
      tmp = tmp->next;
    }
  if (nb >= _size)
    return (false);
  if (tmp->fruit == f)
    return (false);
  elem = new FruitNode;
  elem->fruit = f;
  elem->next = NULL;
  tmp->next = elem;
  _nb++;
  return (true);
}

Fruit		*FruitBox::pickFruit()
{
  FruitNode	*tmp;

  if (list == NULL)
    return (NULL);
  tmp = list;
  list = list->next;
  _nb--;
  return (tmp->fruit);
}

FruitNode	*FruitBox::head() const
{
  return list;
}
