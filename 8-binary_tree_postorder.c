#include "binary_trees.h"

/**
 *binary_tree_postorder- a type of tree traversal that follows the Root-Left-Right policy 
 *@tree: tree structure 
 Return: check on tree structure
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	if (tree->left != NULL)
	binary_tree_postorder(tree->left, func);

	if (tree->right != NULL)
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}