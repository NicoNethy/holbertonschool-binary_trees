#include "binary_trees.h"

/**
 * binary_tree_uncle - my uncle is a tree
 * @tree: my uncle
 * Return: is he?
*/


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
int p;

if (node == NULL)
{
	return (NULL);
}

p = node->n;

	if (node->parent)
	{
		binary_tree_t *parent = node->parent;

	if (parent->parent)
	{
		binary_tree_t *grandparent = parent->parent;

	if (grandparent->left && grandparent->right)
		{
		if (p > grandparent->left->n)
		{
			return (grandparent->left);
		}
		else
		{
			return (grandparent->right);
		}
		}
	}
	}
return (NULL);
}
