/*
** Skat.h for  in /home/simomb_s/piscine_cpp_d07a/ex00
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Jan 13 02:59:06 2016 stephanedarcy simomba
** Last update Wed Jan 13 09:33:53 2016 stephanedarcy simomba
*/

#ifndef SKAT_H_
# define SKAT_H_

#include <string>

class Skat
{
 public:
  Skat(std::string const& name, int stimPaks);
  Skat();
  ~Skat();

 public:
  unsigned int&		stimPaks();
  const std::string&	name();

 public:
  void	shareStimPaks(int number, int& stock);
  void	addStimPaks(unsigned int number);
  void	useStimPaks();

 public:
  void	status();

 private:
  std::string	_name;
  unsigned int	_stimPaks;
};

#endif
