//
// Warpsystem.hh for  in /home/simomb_s/piscine_cpp_d07m/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Tue Jan 12 11:57:08 2016 stephanedarcy simomba
// Last update Tue Jan 12 14:47:20 2016 stephanedarcy simomba
//

#ifndef WARPSYSTEM_H_
# define WARPSYSTEM_H_

namespace WarpSystem
{
  class QuantumReactor
  {
  private:
    bool	_stability;
  public:
    QuantumReactor();
    ~QuantumReactor();
    bool	isStable();
    void	setStability(bool);
  };

  class Core
  {
  private:
    QuantumReactor	*_coreReactor;
  public:
    Core(QuantumReactor *coreReactor);
    ~Core();
    QuantumReactor *checkReactor();
  };
};

#endif /* WARPSYSTEM_H_ */
