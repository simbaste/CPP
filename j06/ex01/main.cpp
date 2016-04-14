//
// main.cpp for  in /home/simomb_s/piscine_cpp_d06/ex01
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 11 10:51:02 2016 stephanedarcy simomba
// Last update Mon Jan 11 18:07:16 2016 stephanedarcy simomba
//

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <algorithm>

int			main()
{
  std::string		str;
  std::stringstream	sflx;
  float			val;
  float			res;
  std::string		temp;

  getline(std::cin, str);
  sflx << str;
  sflx >> val;
  sflx >> temp;
  std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
  if (temp == "celsius")
    {
      res = (val / (5.0 / 9.0)) + 32;
      std::cout << std::setw(16) << std::fixed << std::setprecision(3) <<res << std::setw(16) << "Fahrenheit" << std::endl;
    }
  else if (temp == "fahrenheit")
    {
      res = (5.0 / 9.0) * (val - 32);
      std::cout << std::setw(16) << std::fixed << std::setprecision(3) <<res << std::setw(16) << "Celsius" << std::endl;
    }
  return (0);
}
