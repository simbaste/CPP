//
// main.cpp for  in /home/simomb_s/piscine_cpp_d16/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 22 05:02:40 2016 stephanedarcy simomba
// Last update Fri Jan 22 10:12:55 2016 stephanedarcy simomba
//

#include "Event.h"
#include "EventManager.h"

int		main()
{
  EventManager	*em = new EventManager();

  em->addEvent(Event(10, "Manger"));
  em->addEvent(Event(12, "Finir les exos"));
  em->addEvent(Event(12, "Comprendre le truc"));
  em->addEvent(Event(15, "Mettre les droits"));
  em->addEvent(Event(8, "Demander qu’est ce qu’un const_iterator"));
  em->addEvent(Event(11, "Lavage de mains pour pas que les claviers sentent le grec"));
  em->dumpEvents();
  std::cout << "=====" << std::endl;
  // Suite a une ingestion massive de feuilles d’eucalyptus avariees, les
  // exos du jour sont annules.
  em->removeEventsAt(12);
  em->dumpEvents();
  std::cout << "=====" << std::endl;


  // C’est pas tout mais le temps passe vite
  em->addTime(10);
  std::cout << "=====" << std::endl;

  em->dumpEvents();
  std::cout << "=====" << std::endl;

  // Suite a l’ingestion susnommee et pour pas que vous perdiez la main,
  // une serie d’exos sont ajoutes.
  std::list<Event> todo;
  todo.push_front(Event(19, "La vengeance du Koala"));
  todo.push_front(Event(20, "Le retour de la vengeance du Koala"));
  todo.push_front(Event(21, "Le come back du retour de vengeance du Koala"));
  todo.push_front(Event(22, "La suite du come back du retour de la vengeance du Koala"));
  todo.push_front(Event(9, "Comment ca c’est a faire pour ce matin ?"));
  todo.push_front(Event(1, "Non la c’est abuse quand meme..."));

  em->addEventList(todo);
  em->dumpEvents();
  std::cout << "=====" << std::endl;

  // J’ai oublie un truc, mais quoi ???
  em->dumpEventAt(15);
  std::cout << "=====" << std::endl;

  // Et on finit la journee dans la joie et la bonne humeur.
  em->addTime(14);
  return (0);
}
