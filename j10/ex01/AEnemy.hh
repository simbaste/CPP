//
// AEnemy.hh for  in /home/simomb_s/piscine_cpp_d10/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Sat Jan 16 05:19:55 2016 stephanedarcy simomba
// Last update Sat Jan 16 08:28:38 2016 stephanedarcy simomba
//

#ifndef AENEMY_H_
# define AENEMY_H_

#include <iostream>
#include <string>

class AEnemy
{
protected:
  int			_hp;
  std::string const	_type;

  public:
  AEnemy(int hp, std::string const &type);
  virtual ~AEnemy();
  std::string const getType() const;
  int	getHP() const;

  virtual void	takeDamage(int);
};

#endif /* AENEMY_H_ */
