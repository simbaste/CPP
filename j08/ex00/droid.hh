//
// droid.hh for  in /home/simomb_s/piscine_cpp_d08/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 13 00:25:23 2016 stephanedarcy simomba
// Last update Thu Jan 14 08:55:26 2016 stephanedarcy simomba
//

#ifndef DROID_H_
# define DROID_H_

#include <iostream>
#include <string>

class Droid
{
private:
  std::string	Id;
  size_t	Energy;
  size_t const	Attack;
  size_t const	Toughness;
  std::string	*Status;
public:
  Droid(std::string matricule = "");
  Droid(Droid const& d);
  ~Droid();
  std::string	getId() const;
  size_t	getEnergy() const;
  size_t	getAttack() const;
  size_t	getToughness() const;
  std::string	*getStatus() const;
  void		setId(std::string const matricule);
  void		setEnergy(size_t const energy);
  void		setAttack(size_t const attack);
  void		setToughness(size_t const toughness);
  void		setStatus(std::string *status);
  bool		operator==(Droid const &droid) const;
  bool		operator!=(Droid const &droid) const;
  Droid&	operator=(Droid const &droid);
  Droid&	operator<<(size_t& energy);
};

std::ostream&	operator<<(std::ostream &os, Droid const &droid);

#endif /* DROID_H_ */
