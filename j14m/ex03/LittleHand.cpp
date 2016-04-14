//
// LittleHand.cpp for  in /home/simomb_s/piscine_cpp_d14m/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 19 16:13:57 2016 stephanedarcy simomba
// Last update Wed Jan 20 05:39:24 2016 stephanedarcy simomba
//

#include "LittleHand.h"
#include "Mixer.h"

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

FruitBox * const * LittleHand::organizeCoconut(Coconut const * const * coconuts_packet)
{
  int		size(0);
  int		i(-1);
  FruitBox	**pack;

  while (coconuts_packet[++i] != 0)
    size++;
  if ((size % 6) == 0)
    size /= 6;
  else
    size /= 6 + 1;
  pack = new FruitBox*[size + 2];
  for (int i = 0; (i < size + 2); i++) {
    pack[i] = new FruitBox(6);
  }
  i = -1;
  while (coconuts_packet[++i])
    pack[i / 6]->putFruit(const_cast<Coconut *>(coconuts_packet[i % 6]));
  return pack;
}

void	LittleHand::plugMixer(MixerBase &mixer)
{
  Mixer mix = Mixer();
  mixer = mix;
}
