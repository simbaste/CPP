//
// main.cpp for  in /home/simomb_s/piscine_cpp_d16/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 21 14:42:45 2016 stephanedarcy simomba
// Last update Thu Jan 21 15:56:36 2016 stephanedarcy simomba
//

#include "DomesticKoala.h"

int	main()
{
  KoalaAction action;
  DomesticKoala *dk = new DomesticKoala(action);
  dk->learnAction('<', &KoalaAction::eat);
  dk->learnAction('>', &KoalaAction::goTo);
  dk->learnAction('#', &KoalaAction::sleep);
  dk->learnAction('X', &KoalaAction::reproduce);

  dk->doAction('>', "{EPITECH.}");
  dk->doAction('<', "un DoubleCheese");
  dk->doAction('X', "une Mouette");
  dk->doAction('#', "La fin de la piscine C++, et d'un Astek brulant sur un bucher");
  return (0);
}
