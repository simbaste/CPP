/*
** sickkoala.h for  in /home/simomb_s/piscine_cpp_d06/ex02
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Jan 11 12:52:03 2016 stephanedarcy simomba
** Last update Tue Jan 12 02:14:02 2016 stephanedarcy simomba
*/

#ifndef SICKKOALA_H__
# define SICKKOALA_H__

#include <string>

class SickKoala
{
private:
  std::string	name;
public:
  SickKoala(std::string);
  ~SickKoala();
  void		poke();
  bool		takeDrug(std::string);
  void		overDrive(std::string);
  std::string	getName();
};

#endif /* SICKKOALA_H__ */
