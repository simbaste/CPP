//
// Federation.hh for  in /home/simomb_s/piscine_cpp_d07m/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 12 10:40:37 2016 stephanedarcy simomba
// Last update Tue Jan 12 18:34:49 2016 stephanedarcy simomba
//

#ifndef FEDERATION_H_
# define FEDERATION_H_

#include <string>
#include "Warpsystem.hh"

namespace Borg
{
    class Captain
    {
    private:
      std::string	_name;
      int		_age;
    public:
      Captain(std::string name);
      ~Captain();
      std::string	getName();
      int		getAge();
      void		SetAge(int age);
    };

    class Ship
    {
    private:
      int		_size;
      short		_maxWarp;
      Captain		*_captain;
    public:
      Ship(int size, short maxWarp);
      ~Ship();
      void	promote(Captain*);
    };
  };
};

#endif /* FEDERATION_H_ */
