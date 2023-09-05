#include "binary_trees.h"

/**
 *binary_tree_height- finding the height of a binary tree
 *@tree: tree structure
 *Return: height of tree structure
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_ = 0, right_ = 0;

		left_ = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_ = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_ > right_) ? left_ : right_);
	}
		return (0);
}
