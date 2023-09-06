#include "binary_trees.h"
#include "9-binary_tree_height.c"
 
/**
 *binary_tree_balance - finding if the tree is balanced
 *@tree: tree structure
 *Return: balanced or not
 */

int binary_tree_balance (const binary_tree_t *tree)
{
	if(tree == NULL)
		return(0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	if (abs (left_height - right_height) <= 1 && binary_tree_height(tree->left) && binary_tree_height(tree->right))
		return(1);

	return(0);
}
