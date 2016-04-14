/*
** simple_btree.c for  in /home/simomb_s/piscine_cpp_d02a/ex01
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Jan  7 19:53:23 2016 stephanedarcy simomba
** Last update Thu Jan  7 22:21:54 2016 stephanedarcy simomba
*/

#include <stdlib.h>
#include <stdio.h>
#include "simple_btree.h"

t_bool			btree_is_empty(t_tree tree)
{
  if (tree == NULL)
    return (FALSE);
  return (TRUE);
}

unsigned int		length(t_tree tree, unsigned int n)
{
  if (!tree)
    return (n);
  if (tree->left)
    return (n + length(tree->left, (n + 1)));
  if (tree->right)
    return (n + length(tree->right, (n + 1)));
}

unsigned int		btree_get_size(t_tree tree)
{
  unsigned int		n;

  n = 0;
  n = length(tree, n);
  return (n);
}

unsigned int	my_depth(t_tree tree, unsigned int n, unsigned int m)
{
  unsigned int	nb;

  if (!tree)
    return (m);
  if (tree->left)
    {
      if ((nb = my_depth(tree, n + 1, m)) < m)
	m = nb;
      return (n);
    }
  if (tree->right)
    {
      if ((nb = my_depth(tree, (n + 1), m)) < m)
	m = nb;
      return (n);
    }
  return (m);
}

unsigned int		btree_get_depth(t_tree tree)
{
  unsigned int		l;
  unsigned int		r;

  l = 0;
  r = 0;
  if (tree == NULL)
    return (0);
  my_depth(tree, l, r);
}

t_bool		btree_create_node(t_tree *root_ptr, double value)
{
  t_tree	tmp_node;
  t_tree	tmp_tree;
  t_tree	elem;

  if ((elem = malloc(sizeof(t_node))) == NULL)
    return (FALSE);
  elem->value = value;
  elem->left = NULL;
  elem->right = NULL;
  tmp_tree = *root_ptr;
  if (tmp_tree != NULL)
    {
      while (tmp_tree != NULL)
	{
	  tmp_node = tmp_tree;
	  if (value > tmp_tree->value)
	    {
	      tmp_tree = tmp_tree->right;
	      if (!tmp_tree)
		tmp_node->right = elem;
	    }
	  else
	    {
	      tmp_tree = tmp_tree->left;
	      if (!tmp_tree)
		tmp_node->left = elem;
	    }
	}
    }
  else
    *root_ptr = elem;
  return (TRUE);
}

t_bool		btree_deletes(t_tree *root_ptr)
{
  t_tree	tmp_tree;

  tmp_tree = *root_ptr;
  if (!root_ptr)
    return (FALSE);
  if (tmp_tree->left)
    btree_deletes(&tmp_tree->left);
  if (tmp_tree->right)
    btree_deletes(&tmp_tree->right);
  free(tmp_tree);
  *root_ptr = NULL;
}

double		max_value(t_tree tree, double max)
{
  if (!tree)
    return (max);
  if (tree->value > max)
    max = tree->value;
  if (tree->left)
    return (max_value(tree->left, max));
  if (tree->right)
    return (max_value(tree->right, max));
}

double		btree_get_max_value(t_tree tree)
{
  double	max;

  max = 0;
  return (max_value(tree, max));
}

double		min_value(t_tree tree, double min)
{
  if (!tree)
    return (min);
  if (tree->value < min)
    min = tree->value;
  if (tree->left)
    return (min_value(tree->left, min));
  if (tree->right)
    return (min_value(tree->right, min));
}

double		btree_get_min_value(t_tree tree)
{
  double	min;

  if (!tree)
    return (0);
  min = tree->value;
  return (min_value(tree, min));
}

int main(void)
{

  t_tree tree = NULL;
  t_tree left_sub_tree;
  unsigned int size;
  unsigned int depth;
  double max;
  double min;


  btree_create_node(&tree, 42.5);

  btree_create_node(&(tree->right), 100);

  btree_create_node(&(tree->left), 20);


  left_sub_tree = tree->left;


  btree_create_node(&(left_sub_tree->left), 30);

  btree_create_node(&(left_sub_tree->right), 5);


  size = btree_get_size(tree);

  //depth = btree_get_depth(tree);


  printf("L’arbre a une taille de %u\n", size);

  //printf("L’arbre a une profondeur de %u\n", depth);


  max = btree_get_max_value(tree);
  min = btree_get_min_value(tree);
  printf("Les valeurs de l’arbre vont de %f a %f\n", min, max);
  return (0);
}
