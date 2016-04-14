//
// Event.cpp for  in /home/simomb_s/piscine_cpp_d16/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 22 04:51:00 2016 stephanedarcy simomba
// Last update Fri Jan 22 05:06:18 2016 stephanedarcy simomba
//

#include "Event.h"

Event::Event() : _time(0)
{
}

Event::Event(unsigned int time, const std::string &str) : _time(time), _str(str)
{
}

Event::~Event()
{
}

Event		&Event::operator=(const Event& ev)
{
  _time = ev._time;
  _str = ev._str;
  return *this;
}

unsigned int	Event::getTime(void) const
{
  return _time;
}

const std::string	Event::getEvent(void) const
{
  return _str;
}

void		Event::setTime(unsigned int time)
{
  _time = time;
}

void		Event::setEvent(const std::string &str)
{
  _str = str;
}
