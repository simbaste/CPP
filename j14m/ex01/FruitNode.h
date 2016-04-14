/*
** FruitNode.h for  in /home/simomb_s/piscine_cpp_d14m
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Jan 19 11:16:50 2016 stephanedarcy simomba
** Last update Tue Jan 19 19:23:47 2016 stephanedarcy simomba
*/

#ifndef FRUINODE_H_
# define FRUINODE_H_

#include "Fruit.h"

typedef struct FruitNode
{
  Fruit		*fruit;
  FruitNode	*next;
}		FruitNode;

#endif /* FRUINODE_H_ */
