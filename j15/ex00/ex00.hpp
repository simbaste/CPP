//
// ex00.hpp for  in /home/simomb_s/piscine_cpp_d15/ex00
//
// Made by stephanedarcy simomba
// Login   <simomb_s@epitech.net>
//
// Started on  Wed Jan 20 09:17:32 2016 stephanedarcy simomba
// Last update Wed Jan 20 11:31:58 2016 stephanedarcy simomba
//

//#include <template>

template <typename X>
void	swap(X &a, X &b)
{
  X	tmp;

  tmp = a;
  a = b;
  b = tmp;
}

template <typename X>
X	min(X const a, X const b)
{
  if (a < b)
    return (a);
  return (b);
}

template <typename X>
X	max(X const a, X const b)
{
  if (a > b)
    return (a);
  return (b);
}

template <typename X>
X	add(X const a, X const b)
{
  return a + b;
}
