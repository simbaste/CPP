/*
** String.c for  in /home/simomb_s/piscine_cpp_d03
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Fri Jan  8 10:34:25 2016 stephanedarcy simomba
** Last update Sat Jan  9 00:11:20 2016 stephanedarcy simomba
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "String.h"

void	StringDestroy(String *this)
{
  if (this && this->str)
    {
      free(this->str);
      this->str = NULL;
    }
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
  if (str && this)
    {
      StringDestroy(this);
      this->str = strdup(str);
    }
}

static void	append_s(String *this, String const *ap)
{
  if (ap && ap->str && this)
    {
      if (this->str)
	this->str = strcat(this->str, ap->str);
      else
	this->str = strdup(ap->str);
    }
}

static void	append_c(String *this, char const *ap)
{
  if ((ap != NULL) && (this != NULL))
    {
      if (this->str != NULL)
	this->str = strcat(this->str, ap);
      else
	this->str = strdup(ap);
    }
}

static char		at(String *this, size_t pos)
{
  size_t	i;

  i = 0;
  if (this && this->str)
    {
      while (this->str[i] != '\0')
	{
	  if (i == pos)
	    return (this->str[i]);
	  i++;
	}
    }
  return (-1);
}

static int	size(String *this)
{
  int		i;

  i = 0;
  if (this && this->str)
    {
      while (this->str[i] != '\0')
	i++;
      return (i);
    }
  return (-1);
}

static void		clear(String *this)
{
  if (this && this->str)
    this->str = memset(this->str, 0, strlen(this->str));
}

static int	compare_s(String *this, const String *str)
{
  if (this && str)
    return (strcmp(this->str, str->str));
  return (0);
}

static int	compare_c(String *this, char const *str)
{
  if (this && str)
    return (strcmp(this->str, str));
  return (0);
}

static size_t	copy(String *this, char *s, size_t n, size_t pos)
{
  size_t	i;
  size_t	len;
  size_t	j;

  i = 0;
  j = 0;
  if (this && this->str && s)
    {
      len = strlen(this->str);
      while (i < len)
	{
	  if (i == pos)
	    {
	      while ((i < len) && (j < n) && s)
		{
		  s[j++] = this->str[i];
		  i++;
		}
	      s[j] = '\0';
	    }
	  i++;
	}
    }
  return (j);
}

static char const	*c_str(String *this)
{
  if (this)
    return (this->str);
  return (NULL);
}

static int	empty(String *this)
{
  if (this && this->str)
    {
      if (this->str[0] == '\0')
	return (1);
    }
  return (-1);
}

static int	find_s(String *this, const String *str, size_t pos)
{
  size_t	i;
  size_t	j;
  size_t	len;
  size_t	len1;
  int		n;

  i = 0;
  j = 0;
  if (this && this->str && str && str->str)
    {
      len = strlen(this->str);
      len1 = strlen(str->str);
      while ((i < len) && (this->str[i] != '\0'))
	{
	  if (i == pos)
	    {
	      while ((i < len) && (this->str[i] != '\0'))
		{
		  j = 0;
		  if (this->str[i] == str->str[j])
		    {
		      n = i;
		      while ((j < len1) && (str->str[j] != '\0'))
			{
			  if (str->str[j] == this->str[i++])
			    j++;
			  else
			    break;
			}
		      if (str->str[j] == '\0')
			return (n);
		    }
		  i++;
		}
	    }
	  i++;
	}
    }
  return (-1);
}

static int	find_c(String *this, char const *str, size_t pos)
{
  size_t	i;
  size_t	j;
  size_t	len;
  size_t	len1;
  int		n;

  i = 0;
  j = 0;
  if (this && this->str && str)
    {
      len = strlen(this->str);
      len1 = strlen(str);
      while ((i < len) && (this->str[i] != '\0'))
	{
	  if (i == pos)
	    {
	      while ((i < len) && (this->str[i] != '\0'))
		{
		  j = 0;
		  if (this->str[i] == str[j])
		    {
		      n = i;
		      while ((j < len1) && (str[j] != '\0'))
			{
			  if (str[j] == this->str[i++])
			    j++;
			  else
			    break;
			}
		      if (str[j] == '\0')
			return (n);
		    }
		  i++;
		}
	    }
	  i++;
	}
    }
  return (-1);
}

static void	insert_c(String *this, size_t pos, char const *str)
{
  char		*new;
  int		len;
  size_t	i;
  int		j;
  int		s;

  if (this && str && this->str)
    {
      i = 0;
      j = 0;
      len = strlen(this->str) + strlen(str) + 1;
      if ((new = malloc(sizeof(char) * len)) == NULL)
	return;
      while ((i < pos) && (this->str[i] != '\0'))
	{
	  new[i] = this->str[i];
	  i++;
	}
      s = i;
      while (str[j] != '\0')
	new[i++] = str[j++];
      new[i] = '\0';
      if (this->str[s] == '\0')
	{
	  this->assign_c(this, new);
	  return;
	}
      else
	while (this->str[s] != '\0')
	  new[i++] = this->str[s++];
      new[i] = '\0';
      this->assign_c(this, new);
    }
}

static void	insert_s(String *this, size_t pos, String const *str)
{
  char		*new;
  int		len;
  size_t	i;
  int		j;
  int		s;

  if (this && str && this->str && str->str)
    {
      i = 0;
      j = 0;
      len = strlen(this->str) + strlen(str->str) + 1;
      if ((new = malloc(sizeof(char) * len)) == NULL)
	return;
      while ((i < pos) && (this->str[i] != '\0'))
	{
	  new[i] = this->str[i];
	  i++;
	}
      s = i;
      while (str->str[j] != '\0')
	new[i++] = str->str[j++];
      new[i] = '\0';
      if (this->str[s] == '\0')
	{
	  this->assign_c(this, new);
	  return;
	}
      else
	while (this->str[s] != '\0')
	  new[i++] = this->str[s++];
      new[i] = '\0';
      this->assign_c(this, new);
    }
}

void	StringInit(String *this, char const *s)
{
  if (this)
    {
      this->str = strdup(s);
      this->assign_s = &assign_s;
      this->assign_c = &assign_c;
      this->append_s = &append_s;
      this->append_c = &append_c;
      this->at = &at;
      this->clear = &clear;
      this->size = &size;
      this->compare_s = &compare_s;
      this->compare_c = &compare_c;
      this->copy = &copy;
      this->c_str = &c_str;
      this->empty = &empty;
      this->find_s = &find_s;
      this->find_c = &find_c;
      this->insert_c = insert_c;
      this->insert_s = insert_s;
    }
}
