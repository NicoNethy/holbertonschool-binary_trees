#include "binary_trees.h"

/**
 *binary_tree_delete - deleting node in binary tree
 *@tree: pointer node
 *Return: deleted node
*/

void binary_tree_delete(binary_tree_t *tree)
{
    if(tree == NULL)
        return;
    
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);
    
}
