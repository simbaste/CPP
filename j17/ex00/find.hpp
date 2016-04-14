//
// find.hpp for  in /home/simomb_s/piscine_cpp_d17/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Fri Jan 22 12:09:42 2016 stephanedarcy simomba
// Last update Fri Jan 22 12:35:09 2016 stephanedarcy simomba
//

#ifndef FIND_H_
# define FIND_H_

#include <iostream>
#include <algorithm>

template<typename conteners>
typename conteners::iterator	do_find(conteners con, int nb)
{
  return (find(con.begin(), con.end(), nb));
}

#endif /* FIND_H_ */
