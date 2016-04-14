//
// Picture.cpp for  in /home/simomb_s/piscine_cpp_d13/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 18 06:39:00 2016 stephanedarcy simomba
// Last update Mon Jan 18 14:52:21 2016 stephanedarcy simomba
//

#include <fstream>
#include "Picture.h"

static std::string	readFile(const std::string file)
{
  char		c;
  std::string	str;

  std::ifstream	my_stream(file.c_str());
  if (my_stream)
    {
      while (my_stream.get(c))
	str += c;
      my_stream.close();
    }
  else
    str = "ERROR";
  return (str);
}

Picture::Picture()
{
  _data = "";
}

Picture	&Picture::operator=(Picture const &Pic)
{
  _data = Pic.getData();
  return (*this);
}

Picture::Picture(const std::string &file)
{
  _data = readFile(file);
}

Picture::Picture(Picture const &Pic)
{
  _data = Pic.getData();
}

Picture::~Picture()
{
}

void	Picture::setData(std::string const &data)
{
  _data = data;
}

bool	Picture::getPictureFromFile(const std::string &file)
{
  _data = readFile(file);
  if (_data == "ERROR")
    return (false);
  return (true);
}

std::string	Picture::getData() const
{
  return _data;
}
