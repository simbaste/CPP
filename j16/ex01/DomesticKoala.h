/*
** DomesticKoala.h for  in /home/simomb_s/piscine_cpp_d16/ex01
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Jan 21 13:44:07 2016 stephanedarcy simomba
** Last update Thu Jan 21 14:53:33 2016 stephanedarcy simomba
*/

#ifndef DOMESTICKOALA_H_
# define DOMESTICKOALA_H_

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "KoalaAction.h"

class DomesticKoala
{
 public:
  typedef void (KoalaAction::*methodPointer_t)(const std::string&);

 private:
  std::map<unsigned char, methodPointer_t>	action;
  KoalaAction					koala;
 public:
  DomesticKoala(KoalaAction&);
  ~DomesticKoala();
  DomesticKoala(const DomesticKoala&);
  DomesticKoala& operator=(const DomesticKoala&);
  std::vector<methodPointer_t> const * getAction(void) const;
  void	learnAction(unsigned char, methodPointer_t);
  void	unlearnAction(unsigned char);
  void	doAction(unsigned char, const std::string&);
  void	setKoalaAction(KoalaAction&);
};

#endif /* DOMESTICKOALA_H_ */
