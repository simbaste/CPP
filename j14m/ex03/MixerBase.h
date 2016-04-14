/*
** MixerBase.h for  in /home/simomb_s/piscine_cpp_d14m/ex03
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Jan 20 05:27:12 2016 stephanedarcy simomba
** Last update Wed Jan 20 05:32:38 2016 stephanedarcy simomba
*/

#ifndef MIXERBASE_H_
# define MIXERBASE_H_

#include "FruitBox.h"

class MixerBase
{
 public:
  MixerBase();
  ~MixerBase();

 protected:
  bool	_plugged;
  int	(*_mixfunc)(FruitBox&);
};

#endif /* MIXERBASE_H_ */
