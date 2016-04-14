/*
** String.h for  in /home/simomb_s/piscine_cpp_d03
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Fri Jan  8 10:23:40 2016 stephanedarcy simomba
** Last update Sat Jan  9 00:05:31 2016 stephanedarcy simomba
*/

#ifndef STRING_H_
# define STRING_H_

typedef struct	String
{
  char		*str;
  void		(*assign_s)(struct String *this, struct String const *str);
  void		(*assign_c)(struct String *this, char const *str);
  void		(*append_s)(struct String *this, struct String const *ap);
  void		(*append_c)(struct String *this, char const *ap);
  char		(*at)(struct String *this, size_t pos);
  void		(*clear)(struct String *this);
  int		(*size)(struct String *this);
  int		(*compare_s)(struct String *this, struct String const *str);
  int		(*compare_c)(struct String *this, char const *str);
  size_t	(*copy)(struct String *this, char *s, size_t n, size_t pos);
  char const*	(*c_str)(struct String *this);
  int		(*empty)(struct String *this);
  int		(*find_s)(struct String *this, const struct String *str, size_t pos);
  int		(*find_c)(struct String *this, char const *str, size_t pos);
  void		(*insert_c)(struct String *this, size_t pos, char const *str);
  void		(*insert_s)(struct String *this, size_t pos, struct String const *str);
}		String;

void		StringInit(String *this, char const *s);
void		StringDestroy(String *this);

#endif /* STRING_H_ */
