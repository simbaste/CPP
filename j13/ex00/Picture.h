/*
** Picture.h for  in /home/simomb_s/piscine_cpp_d13/ex00
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Mon Jan 18 06:37:32 2016 stephanedarcy simomba
** Last update Mon Jan 18 10:32:35 2016 stephanedarcy simomba
*/

#ifndef PICTURE_H_
# define PICTURE_H_

#include <iostream>
#include <string>

class Picture
{
 public:
  std::string	_data;
  bool		getPictureFromFile(const std::string &file);

  Picture();
  Picture(const std::string &file);
  ~Picture();
  void	setData(std::string const &data);
  std::string	getData() const;
};

#endif /* !PICTURE_H_ */
