/*
** stack.c for  in /home/simomb_s/piscine_cpp_d02a/ex03
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Fri Jan  8 01:25:42 2016 stephanedarcy simomba
** Last update Fri Jan  8 01:52:23 2016 stephanedarcy simomba
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "generic_list.h"

unsigned int	stack_get_size(t_stack stack)
{
  return (list_get_size(stack));
}

t_bool		stack_is_empty(t_stack stack)
{
  return (list_is_empty(stack));
}

t_bool		stack_push(t_stack *stack_ptr, void *elem)
{
  return (list_add_elem_at_front(stack_ptr, elem));
}

t_bool		stack_pop(t_stack *stack_ptr)
{
  return (list_del_elem_at_front(stack_ptr));
}

void		*stack_top(t_stack stack)
{
  return (list_get_elem_at_front(stack));
}
