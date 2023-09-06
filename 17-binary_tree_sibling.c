#include "binary_trees.h"

/*
 *
 *
 *
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int s;

	if (node == NULL)
	{
		return (NULL);
	}
	s = node->n;

	if (node->parent)
	{
		if (node->parent->right && node->parent->left)
		{
			if (s > node->parent->left->n)
			{
				return (node->parent->left);
			}
			return (node->parent->right);
		}
	}
	return (NULL);
}
