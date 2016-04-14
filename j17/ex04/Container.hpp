//
// Container.hpp for  in /home/simomb_s/piscine_cpp_d17/ex04
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Sat Jan 23 08:32:24 2016 stephanedarcy simomba
// Last update Sat Jan 23 09:51:44 2016 stephanedarcy simomba
//

#ifndef CONTENER_H_
# define CONTENER_H_

#include <iostream>
#include <algorithm>

template<typename T>
void		aff(T val) {
  std::cout << "Valeur : " << val << std::endl;
}

template<typename T>
void		add(T &val) {
  val += 1;
}

template<typename T, template <typename, typename> class container>
class contain
{
private:
  container<T, std::allocator<T> >	_contain;
  T					_val;

public:
  void		push(T val) {
    _contain.push_back(val);
  }
  void		aff() {
    std::for_each(_contain.begin(), _contain.end(), &::aff<T>);
  }
  void		add() {
    std::for_each(_contain.begin(), _contain.end(), &::add<T>);
  }
};

#endif /* CONTENER_H_ */
