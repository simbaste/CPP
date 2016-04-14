//
// sickkoala.cpp for  in /home/simomb_s/piscine_cpp_d06/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 11 12:51:17 2016 stephanedarcy simomba
// Last update Tue Jan 12 01:23:50 2016 stephanedarcy simomba
//

#include <iostream>
#include <sstream>
#include <algorithm>
#include "sickkoala.h"

SickKoala::SickKoala(std::string name)
{
  this->name = name;
}

SickKoala::~SickKoala()
{
  std::cout << "Mr." << this->name << ": Kreooogg !! Je suis gueriiii !" << std::endl;
}

void	SickKoala::poke()
{
  std::cout << "Mr." << this->name << " : Gooeeeeerrk !! :'(" << std::endl;
}

bool	SickKoala::takeDrug(std::string str)
{
  if (str == "Buronzand")
    {
      std::cout << "Mr." << this->name << ": Et la fatigue a fait son temps !" << std::endl;
      return (true);
    }
  std::transform(str.begin(), str.end(), str.begin(), ::tolower);
  if (str == "mars")
    {
      std::cout << "Mr." << this->name << ": Mars, et ca Kreog !" << std::endl;
      return (true);
    }
  std::cout << "Mr." << this->name << ": Goerkreog !" << std::endl;
  return (false);
}

void		SickKoala::overDrive(std::string str)
{
  size_t	i;
  std::string	kreo("Kreog !");

  std::cout << "Mr." << this->name << ": ";
  while ((i = str.find(kreo)) != std::string::npos)
    str.replace(i, kreo.size(), "1337 !");
  std::cout << str << std::endl;
}
