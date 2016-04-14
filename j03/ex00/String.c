/*
** String.c for  in /home/simomb_s/piscine_cpp_d03
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Fri Jan  8 10:34:25 2016 stephanedarcy simomba
** Last update Fri Jan  8 12:11:56 2016 stephanedarcy simomba
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "String.h"

void	StringDestroy(String *this)
{
  if (this && this->str)
    free(this->str);
}

void	StringInit(String *this, char const *s)
{
  if (this && s)
    this->str = strdup(s);
}
