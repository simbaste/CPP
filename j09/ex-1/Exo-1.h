/*
** ex-1.h for  in /home/simomb_s/piscine_cpp_d09/ex-1
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Jan 14 09:40:11 2016 stephanedarcy simomba
** Last update Thu Jan 14 21:03:15 2016 stephanedarcy simomba
*/

#ifndef EX_1_H_
#define Ex_1_H_

typedef struct s_cthulu
{
  int		m_power;
  char		*m_name;
}		t_cthulhu;

typedef struct	s_koalo
{
  t_cthulhu	m_parent;
  char		m_isALegend;
}		t_koala;

t_cthulhu	*NewCthulhu();
void		Attack(t_cthulhu *th);
void		PrintPower(t_cthulhu *th);
void		Sleeping(t_cthulhu *th);
t_koala		*NewKoala(char *name, char _isALegend);
void		Eat(t_koala	*th);

#endif /* !EX_1_H_ */
