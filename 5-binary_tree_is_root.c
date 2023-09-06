#include "binary_trees.h"

/**
 *binary_tree_is_root - checking to see if binary tree is a root
 *@node: node to check leaf status
 *Return: 1 if its leaf
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	return (node->parent == NULL);
}
