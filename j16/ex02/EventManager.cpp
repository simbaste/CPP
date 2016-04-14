//
// EventManager.cpp for  in /home/simomb_s/piscine_cpp_d16/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 22 05:15:56 2016 stephanedarcy simomba
// Last update Fri Jan 22 10:10:36 2016 stephanedarcy simomba
//

#include "EventManager.h"

EventManager::EventManager() : _time(0)
{
}

EventManager::~EventManager()
{
}

unsigned int	EventManager::getTime() const
{
  return _time;
}

std::list<Event>	EventManager::getEvent() const
{
  return _event;
}

EventManager::EventManager(EventManager const &ev)
{
  _event = ev.getEvent();
  _time = ev.getTime();
}


EventManager	&EventManager::operator=(EventManager const &ev)
{
  _event = ev.getEvent();
  _time = ev.getTime();
  return *this;
}

bool		sortTime(const Event &a, const Event &b)
{
  if (a.getTime() <= b.getTime())
    return true;
  return false;
}

void		EventManager::addEvent(const Event &ev)
{
  if (ev.getTime() >= _time)
    {
      _event.push_back(ev);
      _event.sort(sortTime);
    }
}

void		EventManager::removeEventsAt(unsigned int time)
{
  for (std::list<Event>::iterator it = _event.begin(); it != _event.end(); ++it) {
    if (it->getTime() == time)
      {
	it = _event.erase(it);
	it--;
      }
  }
}

void		EventManager::dumpEvents(void) const
{
    for (std::list<Event>::const_iterator it = _event.begin(); it != _event.end(); ++it) {
      std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
  }
}

void		EventManager::dumpEventAt(unsigned int time) const
{
  for (std::list<Event>::const_iterator it = _event.begin(); it != _event.end(); ++it) {
    if (it->getTime() == time)
      {
	std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
      }
  }
}

void		EventManager::addTime(unsigned int time)
{
  _time += time;
  for (std::list<Event>::iterator it = _event.begin(); it != _event.end(); ++it) {
    std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
    it = _event.erase(it);
    it--;
  }
}


void		EventManager::addEventList(std::list<Event>& ev)
{
  for (std::list<Event>::iterator it = ev.begin(); it != ev.end(); ++it) {
    addEvent(Event(it->getTime(), it->getEvent()));
  }
}
