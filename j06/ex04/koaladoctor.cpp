//
// koaladoctor.cpp for  in /home/simomb_s/piscine_cpp_d06/ex04
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 11 23:13:25 2016 stephanedarcy simomba
// Last update Tue Jan 12 02:20:25 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string name)
{
  this->name = name;
  this->active = false;
  std::cout << "Dr." << this->name << ": Je suis le Dr." << name << " ! Comment Kreoggez-vous ?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
  this->name = "";
}

void	KoalaDoctor::diagnose(SickKoala *koala)
{
  std::string	file;
  std::ofstream	stream;
  std::string	drug[5] = {"mars", "Buronzand", "Viagra", "Extasy", "Feuille d'aucalyptus"};
  int		i;

  koala->poke();
  file = koala->getName();
  file += ".report";
  stream.open(file.c_str());
  i = random() % 5;
  if (stream.is_open())
    stream << drug[i];
}

void	KoalaDoctor::timeCheck()
{
  if (this->active == false)
    {
      this->active = true;
      std::cout << "Dr." << this->name << ": Je commence le travail !" << std::endl;
    }
  else
    {
      this->active = false;
      std::cout << "Dr." << this->name << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
    }
}
