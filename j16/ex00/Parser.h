/*
** Parser.h for  in /home/simomb_s/piscine_cpp_d16
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Jan 21 09:42:52 2016 stephanedarcy simomba
** Last update Thu Jan 21 14:18:09 2016 stephanedarcy simomba
*/

#ifndef PARSER_H_
# define PARSER_H_

#include <iostream>
#include <string>
#include <stack>

class Parser
{
private:
  std::stack<char>		pile;
  std::stack<int>		sortie;
  int				_res;
 public:
  Parser();
  ~Parser();
  Parser(Parser const&);
  Parser		&operator=(Parser const&);
  void			feed(std::string str);
  int			result() const;
  void			reset();
};

#endif /* PARSER_H_ */
