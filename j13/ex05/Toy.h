/*
** Toy.h for  in /home/simomb_s/piscine_cpp_d13/ex00
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Jan 18 06:38:07 2016 stephanedarcy simomba
** Last update Mon Jan 18 18:04:29 2016 stephanedarcy simomba
*/

#ifndef TOY_H_
# define TOY_H_

#include <iostream>
#include <string>
#include "Picture.h"

class Toy
{
 public:
  typedef enum	ToyType
  {
    BASIC_TOY,
    ALIEN,
    BUZZ,
    WOODY
  }		ToyType;
 protected:
  ToyType	_type;
  std::string	_name;
  Picture	_picture;

 public:
  Toy();
  Toy(ToyType type, std::string const &name, std::string const &file);
  Toy(Toy const &cls);
  ~Toy();
  ToyType	getType() const;
  std::string	getName() const;
  void		setName(std::string const &name);
  bool		setAscii(std::string const &data);
  std::string	getAscii() const;
  Picture	getPicture() const;
  Toy		&operator=(Toy const &cls);
  virtual void		speak(std::string const &str);
  virtual bool		speak_es(std::string const &str);
  Toy		&operator<<(std::string const &data);

  class Error
  {
  public:
    enum	ErrorType
    {
      UNKNOWN,
      PICTURE,
      SPEAK
    };
    Error();
    ~Error();
    ErrorType	type;
    std::string	what();
    std::string	where();
  };
  Error	my_err;
  Error	getLastError();
};

std::ostream	&operator<<(std::ostream &os, Toy const &cls);

#endif /* !TOY_H_ */
