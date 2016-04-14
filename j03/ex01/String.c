/*
** String.c for  in /home/simomb_s/piscine_cpp_d03
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Fri Jan  8 10:34:25 2016 stephanedarcy simomba
** Last update Fri Jan  8 16:29:58 2016 stephanedarcy simomba
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "String.h"

void	StringDestroy(String *this)
{
  if (this && this->str)
    free(this->str);
}

static void	assign_s(String *this, String const *str)
{
  if ((str != NULL) && (this != NULL))
    {
      StringDestroy(this);
      this->str = strdup(str->str);
    }
}

static void	assign_c(String *this, char const *str)
{
  if (str&& this)
    {
      StringDestroy(this);
      this->str = strdup(str);
    }
}

void	StringInit(String *this, char const *s)
{
  if (this)
    {
      this->str = strdup(s);
      this->assign_s = &assign_s;
      this->assign_c = &assign_c;
    }
}
