/*
** koalanurse.h for  in /home/simomb_s/piscine_cpp_d06/ex03
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Jan 11 15:25:42 2016 stephanedarcy simomba
** Last update Mon Jan 11 21:16:14 2016 stephanedarcy simomba
*/

#ifndef KOALANURSE_H_
# define KOALANURSE_H_

#include <string>
#include "sickkoala.h"

class KoalaNurse
{
 private:
  unsigned int	id;
  bool	active;

 public:
  KoalaNurse(unsigned int id);
  ~KoalaNurse();
  void		giveDrug(std::string drug, SickKoala *koala);
  std::string	readReport(std::string report);
  void		timeCheck();
};

#endif /* KOALANURSE_H_ */
