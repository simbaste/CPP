/*
** String.h for  in /home/simomb_s/piscine_cpp_d03
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Fri Jan  8 10:23:40 2016 stephanedarcy simomba
** Last update Fri Jan  8 12:22:34 2016 stephanedarcy simomba
*/

#ifndef STRING_H_
# define STRING_H_

typedef struct	String
{
  char		*str;
  void		(*assign_s)(struct String *this, struct String const *str);
  void		(*assign_c)(struct String *this, char const *str);
}		String;

void		StringInit(String *this, char const *s);
void		StringDestroy(String *this);

#endif /* STRING_H_ */
