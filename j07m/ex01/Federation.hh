//
// Federation.hh for  in /home/simomb_s/piscine_cpp_d07m/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 12 10:40:37 2016 stephanedarcy simomba
// Last update Tue Jan 12 18:15:30 2016 stephanedarcy simomba
//

#ifndef FEDERATION_H_
# define FEDERATION_H_

#include <string>
#include "Warpsystem.hh"
#include "Borg.hh"

namespace Federation
{
  namespace Starfleet
  {
    class Ship
    {
    private:
      int			_length;
      int			_width;
      std::string		_name;
      short			_maxWarp;
      WarpSystem::Core		*_core;
      Borg::Starfleet::Captain	*_captain;
    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();
      void	setupCore(WarpSystem::Core *PtrToCore);
      void	checkCore();
      void	promote(Borg::Starfleet::Captain*)
    };

    class Ensign
    {
    private:
      std::string	_name;
    public:
      Ensign(std::string name);
      ~Ensign();
    }
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
