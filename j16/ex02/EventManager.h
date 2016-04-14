/*
** EventManager.h for  in /home/simomb_s/piscine_cpp_d16/ex02
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Fri Jan 22 05:07:10 2016 stephanedarcy simomba
** Last update Fri Jan 22 09:37:19 2016 stephanedarcy simomba
*/

#ifndef EVENTMANAGER_H_
#define EVENTMANAGER_H_

#include <list>
#include <iostream>
#include <string>
#include "Event.h"

class EventManager
{
 private:
  unsigned int		_time;
  std::list<Event>	_event;
 public:
  EventManager();
  ~EventManager();
  EventManager(EventManager const &);
  EventManager	&operator=(EventManager const&);
  void		addEvent(const Event&);
  void		removeEventsAt(unsigned int);
  void		dumpEvents(void) const;
  void		dumpEventAt(unsigned int) const;
  void		addTime(unsigned int);
  void		addEventList(std::list<Event>&);
  unsigned int	getTime() const;
  std::list<Event>	getEvent() const;
};

#endif /* EVENTMANAGER_H_ */
