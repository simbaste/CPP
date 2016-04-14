/*
** KoalaAction.h for  in /home/simomb_s/piscine_cpp_d16/ex01
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Jan 21 14:32:09 2016 stephanedarcy simomba
** Last update Thu Jan 21 15:55:08 2016 stephanedarcy simomba
*/

#ifndef KOALAACTION_H_
# define KOALAACTION_H_

#include <iostream>
#include <string>

class KoalaAction
{
 public:
  void	eat(const std::string& str) {
    std::cout << "Je mange: " << str << std::endl;
  }
  void	sleep(const std::string& str) {
    std::cout << "Je dors et je reve de: " << str << std::endl;
  }
  void	goTo(const std::string& str) {
    std::cout << "Je vais a: " << str << std::endl;
  }
  void	reproduce(const std::string& str) {
    std::cout << "Je tente de me reproduire avec: " << str << std::endl;
  }
};

#endif /* KOALAACTION_H_ */
