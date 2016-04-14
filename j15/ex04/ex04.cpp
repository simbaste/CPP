//
// ex04.cpp for  in /home/simomb_s/piscine_cpp_d15/ex04
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 20 14:54:31 2016 stephanedarcy simomba
// Last update Wed Jan 20 16:39:39 2016 stephanedarcy simomba
//

#include <iostream>
#include <string>
#include "ex04.hpp"

template <typename T>
bool	equal(const T &a, const T &b)
{
  if (a == b)
    return (true);
  return (false);
}

template <typename T>
bool	Tester<T>::equal(const T &a, const T &b)
{
  if (a == b)
    return (true);
  return (false);
}

template bool	equal<int>(const int &a, const int &b);
template bool	equal<float>(const float &a, const float &b);
template bool	equal<double>(const double &a, const double &b);
template bool	equal<std::string>(const std::string &a, const std::string &b);

template bool	Tester<int>::equal(const int &a, const int &b);
template bool	Tester<float>::equal(const float &a, const float &b);
template bool	Tester<double>::equal(const double &a, const double &b);
template bool	Tester<std::string>::equal(const std::string &a, const std::string &b);
