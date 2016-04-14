//
// koalanurse.cpp for  in /home/simomb_s/piscine_cpp_d06/ex03
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 11 18:52:56 2016 stephanedarcy simomba
// Last update Tue Jan 12 01:27:51 2016 stephanedarcy simomba
//

#include <iostream>
#include <fstream>
#include <string>
#include "koalanurse.h"

KoalaNurse::KoalaNurse(unsigned int id)
{
  this->id = id;
  this->active = false;
}

KoalaNurse::~KoalaNurse()
{
  std::cout << "Nurse " << this->id << ": Enfin un peu de repos !" << std::endl;
}

void		KoalaNurse::giveDrug(std::string drug, SickKoala *koala)
{
  koala->takeDrug(drug);
}

std::string	KoalaNurse::readReport(std::string file)
{
  std::string	name;
  std::string	drug("");
  std::ifstream	stream(file.c_str());

  name = file.substr(0, file.find(".report"));
  if (name != file && stream.is_open())
    {
      stream >> drug;
      std::cout << "Nurse " << this->id << ": Kreog ! il faut donner un " << drug << " a Mr." << name << " !" << std::endl;
      return (drug);
    }
  return (drug);
}

void		KoalaNurse::timeCheck()
{
  if (this->active == false)
    {
      this->active = true;
      std::cout << "Nurse " << this->id << ": Je commence le travail !" << std::endl;
    }
  else
    {
      this->active = false;
      std::cout << "Nurse " << this->id << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
    }
}
