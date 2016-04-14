/*
** ex_6.h for  in /home/simomb_s/piscine_cpp_d01/ex06
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Jan  7 01:01:13 2016 stephanedarcy simomba
** Last update Thu Jan  7 02:42:07 2016 stephanedarcy simomba
*/

#ifndef EX_06_
# define EX_06_

typedef struct s_foo
{

}		t_foo;

typedef struct	s_bar
{
  struct t_foo	foo;
  struct s_bar	*bar;
}		t_bar;

struct		s_foo
{
  s_bar		bar;
  s_foo		foo;
};

#endif /* ! EX_06_ */
