//
// LittleHand.cpp for  in /home/simomb_s/piscine_cpp_d14m/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 19 16:13:57 2016 stephanedarcy simomba
// Last update Tue Jan 19 19:42:02 2016 stephanedarcy simomba
//

#include "LittleHand.h"

LittleHand::LittleHand()
{
}

LittleHand::~LittleHand()
{
}

void		supList(FruitNode *list, FruitNode *tmp)
{
  FruitNode	*temp;

  if (list == tmp)
    {
      list = list->next;
      return;
    }
  temp = list;
  while ((temp != NULL) && (temp->next != NULL) && (temp->next->next != NULL))
    {
      if (temp->next == tmp)
	temp->next = temp->next->next;
      else
	temp = temp->next;
    }
  if (temp->next == tmp)
    temp = temp->next;
}

void	LittleHand::sortFruitBox(FruitBox &unsorted,
				 FruitBox &lemons,
				 FruitBox &bananas,
				 FruitBox &limes)
{
  FruitNode	*tmp;
  Fruit		*t;
  Fruit		*f;
  int		i(0);
  int		nb = unsorted.nbFruits();

  tmp = unsorted.head();
  if (!tmp)
    return;
  while (i < nb && tmp)
    {
      t = tmp->fruit;
      if (dynamic_cast<Banana *>(t))
	{
	  if (bananas.putFruit((f = unsorted.pickFruit())) == false)
	    unsorted.putFruit(f);
	}
      else if (dynamic_cast<Lime *>(t))
	{
	  if (limes.putFruit((f = unsorted.pickFruit())) == false)
	    unsorted.putFruit(f);
	}
      else if (dynamic_cast<Lemon *>(t))
	{
	  if (lemons.putFruit((f = unsorted.pickFruit())) == false)
	    unsorted.putFruit(f);
	}
      tmp = tmp->next;
      i++;
    }
}
