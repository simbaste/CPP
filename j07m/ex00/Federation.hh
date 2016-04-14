//
// Federation.hh for  in /home/simomb_s/piscine_cpp_d07m/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 12 10:40:37 2016 stephanedarcy simomba
// Last update Tue Jan 12 14:26:37 2016 stephanedarcy simomba
//

#ifndef FEDERATION_H_
# define FEDERATION_H_

#include <string>
#include "Warpsystem.hh"

namespace Federation
{
  namespace Starfleet
  {
    class Ship
    {
    private:
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core	*_core;
    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();
      void	setupCore(WarpSystem::Core *PtrToCore);
      void	checkCore();
    };
  };

  class Ship
  {
  private:
    int			_length;
    int			_width;
    std::string		_name;
    short		_maxWarp;
    WarpSystem::Core	*_core;;
  public:
    Ship(int _length, int _width, std::string name);
    ~Ship();
    void	setupCore(WarpSystem::Core *PtrToCore);
    void	checkCore();
  };
};

#endif /* FEDERATION_H_ */
