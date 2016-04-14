/*
** main.c for  in /home/simomb_s/piscine_cpp_d03/ex02
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Fri Jan  8 13:12:31 2016 stephanedarcy simomba
** Last update Sat Jan  9 09:44:30 2016 stephanedarcy simomba
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "String.h"

int	main()
{
  char          str[] = "toto titi oui ";
  char          str1[] = "tata tutu";
  char          str2[] = "fais dodo ";
  String        this;
  char const	*my_str;
  String        my_this;
  char		c;
  int		len;

  StringInit(&this, str);
  printf("str = %s\n", this.str);
  this.assign_c(&this, str1);
  printf("assign_c str1 = %s\n", this.str);
  StringInit(&my_this, str);
  this.assign_s(&this, &my_this);
  printf("assign_s str = %s\n", this.str);
  this.append_c(&this, str2);
  printf("assign_c str et str2 = %s\n", this.str);
  StringInit(&my_this, str1);
  this.append_s(&this, &my_this);
  printf("assign_s str et str2 et str1 = %s\n", this.str);
  c = this.at(&this, 3);
  printf("le troisième caractère est %c\n", c);
  len = this.size(&this);
  printf("%d\n", len);
  printf("compare_s %d\n", this.compare_s(&this, &my_this));
  len = this.compare_c(&this, str);
  printf("roro\n");
  printf("compare_c %d\n", len);
  my_this.clear(&my_this);
  this.copy(&this, my_this.str, 5, 4);
  printf("copy str = %s\n", my_this.str);
  my_str = this.c_str(&my_this);
  printf("c_str = >%s<\n", my_str);
  my_this.insert_s(&my_this, 0, &this);
  printf("new = %s\n", my_this.str);
  return (0);
}
