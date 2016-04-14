//
// Parser.cpp for  in /home/simomb_s/piscine_cpp_d16
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Thu Jan 21 09:46:41 2016 stephanedarcy simomba
// Last update Thu Jan 21 14:18:52 2016 stephanedarcy simomba
//

#include <sstream>
#include "Parser.h"

Parser::Parser() : _res(0)
{
}

Parser::~Parser()
{
}

Parser::Parser(Parser const &P)
{
  pile = P.pile;
  sortie = P.sortie;
  _res = P._res;
}

Parser	&Parser::operator=(Parser const &P)
{
  pile = P.pile;
  sortie = P.sortie;
  _res = P._res;
  return *this;
}

void			Parser::feed(std::string str)
{
  unsigned int		i(0);
  std::string		nb;
  int			a;
  int			b;

  while (i < str.size())
    {
      nb.clear();
      if (str[i] >= '0' && str[i] <= '9')
	{
	  while (str[i] >= '0' && str[i] <= '9')
	    nb += str[i++];
	  std::stringstream(nb) >> a;
	  sortie.push(a);
	}
      else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%' || str[i] == '(')
	{
	  pile.push(str[i]);
	  i++;
	}
      else if (str[i] == ')')
	{
	  i++;
	  while (pile.top() != '(')
	    {
	      a = sortie.top();
	      sortie.pop();
	      b = sortie.top();
	      sortie.pop();
	      switch (pile.top())
		{
		case '+' :
		  sortie.push(b + a);
		  break;
		case '-' :
		  sortie.push(b - a);
		  break;
		case '*' :
		  sortie.push(b * a);
		  break;
		case '/' :
		  sortie.push(b / a);
		  break;
		case '%' :
		  sortie.push(b % a);
		  break;
		default:
		  break;
		}
	      pile.pop();
	    }
	  pile.pop();
	}
      else
	i++;
    }
  while (!pile.empty())
    {
      a = sortie.top();
      sortie.pop();
      b = sortie.top();
      sortie.pop();
      switch (pile.top())
	{
	case '+' :
	  sortie.push(b + a);
	  break;
	case '-' :
	  sortie.push(b - a);
	  break;
	case '*' :
	  sortie.push(b * a);
	  break;
	case '/' :
	  sortie.push(b / a);
	  break;
	case '%' :
	  sortie.push(b % a);
	  break;
	default:
	  break;
	}
      pile.pop();
    }
  _res += sortie.top();
  sortie.pop();
}

int	Parser::result() const
{
  return _res;
}

void	Parser::reset()
{
  std::stack<char>	opr;
  std::stack<int>	opra;

  _res = 0;
  pile = opr;
  sortie = opra;
}
