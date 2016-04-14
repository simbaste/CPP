/*
** koaladoctor.h for  in /home/simomb_s/piscine_cpp_d06/ex04
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Tue Jan 12 01:37:56 2016 stephanedarcy simomba
** Last update Tue Jan 12 02:13:16 2016 stephanedarcy simomba
*/

#ifndef KOALADOCTOR_H_
# define KOALADOCTOR_H_

#include <string>
#include "sickkoala.h"

class KoalaDoctor
{
 private:
  std::string	name;
  bool		active;
 public:
  KoalaDoctor(std::string name);
  ~KoalaDoctor();
  void	diagnose(SickKoala *koala);
  void	timeCheck();
};

#endif /* KOALADOCTOR_H_ */
