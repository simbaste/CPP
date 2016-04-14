//
// Character.hh for  in /home/simomb_s/piscine_cpp_d09/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 14 11:36:55 2016 stephanedarcy simomba
// Last update Thu Jan 14 18:12:58 2016 stephanedarcy simomba
//

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <iostream>

class Character
{
public:
  enum		AttackRange
  {
    CLOSE,
    RANGE
  };
  AttackRange	Range;

protected:
  std::string	_name;
  std::string	_race;
  int		_lvl;
  int		_power;
  int		_pv;

  int		_force;
  int		_endurance;
  int		_intelligence;
  int		_esprit;
  int		_agilite;

public:
  Character(std::string name, int lvl);
  ~Character();
  const std::string	&getName() const;
  int			getLvl() const;
  int			getPv() const;
  int			getPower() const;
  int			CloseAttack();
  int			RangeAttack();
  void			Heal();
  void			RestorePower();
  void			TakeDamage(int _damage);
};

#endif /* CHARACTER_H_ */
