//
// main.cpp for  in /home/simomb_s/piscine_cpp_d13/ex02
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Mon Jan 18 12:08:12 2016 stephanedarcy simomba
// Last update Mon Jan 18 18:06:50 2016 stephanedarcy simomba
//

#include <iostream>
#include "Buzz.h"
#include "Woody.h"
#include "Toy.h"

int	main()
{
  Woody w("wood");

  if (w.setAscii("file_who_does_not_exist.txt") == false)
    {
      Toy::Error e = w.getLastError();
      if (e.type == Toy::Error::PICTURE)
	{
	  std::cout << "Error in " << e.where()
		    << ": " << e.what() << std::endl;
	}
    }
  if (w.speak_es("Woody does not have spanish mode") == false)
    {
      Toy::Error e = w.getLastError();
      if (e.type == Toy::Error::SPEAK)
	{
	  std::cout << "Error in " << e.where()
		    << ": " << e.what() << std::endl;
	}
    }
  if (w.speak_es("Woody does not have spanish mode") == false)
    {
      Toy::Error e = w.getLastError();
      if (e.type == Toy::Error::SPEAK)
	{
	  std::cout << "Error in " << e.where()
		    << ": " << e.what() << std::endl;
	}
    }
  return (0);
}
