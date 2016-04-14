//
// ex05.hpp for  in /home/simomb_s/piscine_cpp_d15/ex05
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 20 18:12:06 2016 stephanedarcy simomba
// Last update Thu Jan 21 03:39:39 2016 stephanedarcy simomba
//

#ifndef EX05_H_
#define EX05_H_

#include <iomanip>
#include <iostream>
#include <string>

template <typename T>
class array
{
private:
  T	*tab;
  int	_size;
public:
  array() {
    tab = NULL;
    _size = 0;
  }
  array(unsigned int n) {
    tab = new T[n];
    _size = n;
  }
  array(array const &A) {
    int	i(0);


    _size = A._size;
    tab = new T[A._size];
    while (i < A._size) {
	tab[i] = A.tab[i];
	i++;
      }
  }
  ~array() {
    if (tab)
      delete[] tab;
  }
  void	dump() const {
    int	i(0);

    std::cout << "[";
    while (i < _size)
      {
	std::cout << tab[i];
	if (++i != _size)
	  std::cout << ", ";
      }
    std::cout << "]" << std::endl;
  }
  int	size() const {
    return _size;
  }
  template <typename U>
  array<U> convertTo(U (*func)(T const &)) const {
    array<U> new_tab(_size);
    int	i(0);
    while (i < _size) {
      new_tab[i] = func(tab[i]);
      i++;
    }
    return (new_tab);
  }
  array<T>	&operator=(const array<T> & A) {
    int	i(0);

    if (tab)
      delete[] tab;
    tab = new T[A._size];
    _size = A._size;
    while (i < A._size) {
      tab[i] = A.tab[i];
      i++;
    }
    return *this;
  }
  T &operator[](int n) {
    if (n >= _size) {
      int	i(0);
      T *A = new T[n + 1];
      while (i < _size) {
	A[i] = tab[i];
	i++;
      }
      delete[] tab;
      tab = A;
      _size = n + 1;
    }
    return tab[n];
  }
   T &operator[](int n) const {
    if (n >= _size)
      throw std::exception();
    return tab[n];
  }
};

template<>
void	array<bool>::dump() const {
  int	i(0);

  std::cout << "[";
  while (i < _size) {
    std::cout << std::boolalpha << tab[i];
    if (++i != _size)
      std::cout << ", ";
  }
  std::cout << std::noboolalpha << "]" << std::endl;
}

#endif /* EX05_H_ */
