/*
** simple_list.c for  in /home/simomb_s/piscine_cpp_d02a/ex00
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Jan  7 15:51:30 2016 stephanedarcy simomba
** Last update Thu Jan  7 19:02:31 2016 stephanedarcy simomba
*/

#include <stdlib.h>
#include <stdio.h>
#include "simple_list.h"

unsigned int	list_get_size(t_list list)
{
  unsigned int	i;

  i = 0;
  while (list != NULL)
    {
      list = list->next;
      i++;
    }
  return (i);
}

t_bool		list_is_empty(t_list list)
{
  if (list == NULL)
    return (TRUE);
  return (FALSE);
}

void		list_dump(t_list list)
{
  while (list != NULL)
    {
      printf("%f\n", list->value);
      list = list->next;
    }
}

t_bool		list_add_elem_at_front(t_list *front_ptr, double elem)
{
  t_list	m_elem;

  if ((m_elem = malloc(sizeof(t_list))) == NULL)
    return (FALSE);
  m_elem->value = elem;
  m_elem->next = *front_ptr;
  *front_ptr = m_elem;
  return (TRUE);
}

t_bool		list_add_elem_at_back(t_list *front_ptr, double elem)
{
  t_list	m_elem;
  t_list	tmp;

  if ((m_elem = malloc(sizeof(t_list))) == NULL)
    return (FALSE);
  m_elem->value = elem;
  m_elem->next = NULL;
  if (*front_ptr == NULL)
    {
      *front_ptr = m_elem;
      return (TRUE);
    }
  tmp = *front_ptr;
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = m_elem;
  return (TRUE);
}

t_bool		list_add_elem_at_position(t_list *front_ptr, double elem, unsigned int position)
{
  t_list	m_elem;
  t_list	tmp;
  unsigned int	pos;

  pos = 0;
  if (position == 0)
    return (list_add_elem_at_front(front_ptr, elem));
  if ((m_elem = malloc(sizeof(t_list))) == NULL)
    return (FALSE);
  m_elem->value = elem;
  tmp = *front_ptr;
  while (tmp->next != NULL)
    {
      if (pos == position)
	{
	  tmp->next = m_elem;
	  m_elem->next = tmp->next->next;
	  return (TRUE);
	}
      pos++;
      tmp->next = tmp->next->next;
    }
  if (pos == position)
    {
      tmp->next = m_elem;
      m_elem->next = NULL;
    }
  return (TRUE);
}

t_bool		list_del_elem_at_front(t_list *list)
{
  t_list	tmp;

  if (*list == NULL)
    return (FALSE);
  tmp = *list;
  *list = (*list)->next;
  free(tmp);
  return (TRUE);
}

t_bool		list_del_elem_at_back(t_list *list)
{
  t_list	temp;

  if (*list == NULL)
    return (FALSE);
  if ((*list)->next == NULL)
    {
      free(*list);
      return (TRUE);
    }
  temp = *list;
  while (temp->next->next != NULL)
    temp = temp->next;
  free(temp->next);
  temp->next = NULL;
  return (TRUE);
}

t_bool		list_del_elem_at_position(t_list *list, unsigned int position)
{
  unsigned int	pos;
  t_list	tmp;
  t_list	temp;

  pos = 0;
  if (position < 0.00)
    return (FALSE);
  if (position == 0)
    return (list_del_elem_at_front(list));
  temp = *list;
  while (temp->next->next != NULL)
    {
      if (pos == position)
	{
	  tmp = temp->next;
	  temp->next = temp->next->next;
	  free(tmp);
	  return (TRUE);
	}
      pos++;
      temp = temp->next;
    }
  if (pos == position)
    return (list_del_elem_at_back(list));
  return (TRUE);
}

double		list_get_elem_at_front(t_list list)
{
  if (list == NULL)
    return (0);
  return (list->value);
}

double		list_get_elem_at_back(t_list list)
{
  if (list == NULL)
    return (0);
  while (list->next != NULL)
    list = list->next;
  return (list->value);
}

double		list_get_elem_at_position(t_list list, unsigned int position)
{
  unsigned int	pos;

  pos = 0;
  while (list != NULL)
    {
      if (pos == position)
	return (list->value);
      pos++;
      list = list->next;
    }
  return (0);
}

t_node		*list_get_first_node_whith_value(t_list list, double value)
{
  while (list != NULL)
    {
      if (list->value == value)
	return (list);
      list = list->next;
    }
  return (NULL);
}
