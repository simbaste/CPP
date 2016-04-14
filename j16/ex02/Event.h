/*
** Event.h for  in /home/simomb_s/piscine_cpp_d16/ex02
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Fri Jan 22 04:50:35 2016 stephanedarcy simomba
** Last update Fri Jan 22 05:02:29 2016 stephanedarcy simomba
*/

#ifndef EVENT_H_
# define EVENT_H_

#include <iostream>
#include <string>

class Event
{
 private:
  unsigned int	_time;
  std::string	_str;
 public:
  Event(void);
  Event(unsigned int, const std::string&);
  ~Event(void);
  Event&		operator=(const Event&);
  unsigned int		getTime(void) const;
  const std::string	getEvent(void) const;
  void			setTime(unsigned int);
  void			setEvent(const std::string&);
};

#endif /* EVENT_H_ */
