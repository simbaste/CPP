/*
** ex-1.c for  in /home/simomb_s/piscine_cpp_d09/ex-1
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Jan 14 09:44:17 2016 stephanedarcy simomba
** Last update Thu Jan 14 20:52:55 2016 stephanedarcy simomba
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Exo-1.h"

static void	KoalaInitializer(t_koala *this, char *_name, char _isALegend)
{
  t_cthulhu	*new_t;

  new_t = NewCthulhu();
  this->m_parent = *new_t;
  this->m_parent.m_name = strdup(_name);
  if (_isALegend <= 0)
    this->m_parent.m_power = 0;
  this->m_isALegend = _isALegend;
}

static void	CthulhuInitializer(t_cthulhu *this)
{
  if ((this->m_name = malloc(sizeof(char) * strlen("Cthulhu"))) == NULL)
    return;
  this->m_name = "Cthulhu";
  this->m_power = 42;
}

t_cthulhu	*NewCthulhu()
{
  t_cthulhu	*this;

  if ((this = malloc(sizeof(t_cthulhu))) == NULL)
    return (NULL);
  CthulhuInitializer(this);
  printf("----\nBuilding %s\n", this->m_name);
  return (this);
}

void	Eat(t_koala *this)
{
  this->m_parent.m_power = 42;
  printf("%s eats\n", this->m_parent.m_name);
}

void	PrintPower(t_cthulhu *this)
{
  printf("Power => %d\n", this->m_power);
}

void	Attack(t_cthulhu *this)
{
  if (this->m_power >= 42)
    {
      this->m_power -= 42;
      printf("%s attacks and destroys the city\n", this->m_name);
    }
  else
    printf("%s can't attack, he doesn't have enough power\n", this->m_name);
}

void	Sleeping(t_cthulhu *this)
{
  this->m_power = 42000;
  printf("%s sleeps\n", this->m_name);
}

t_koala		*NewKoala(char *name, char _isALegend)
{
  t_koala	*this;

  if ((this = malloc(sizeof(t_koala))) == NULL)
    return (NULL);
  KoalaInitializer(this, name, _isALegend);
  printf("Building %s\n", this->m_parent.m_name);
  return (this);
}
