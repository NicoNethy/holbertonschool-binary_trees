#include "binary_trees.h"

/**
 *binary_tree_depth- finding the depth of a binary tree
 *@tree: tree structure
 Return: depth of tree structure
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
    {
	    return (0);
    }
	else
    {
    	return (binary_tree_depth(tree->parent) + 1);
    }
}
