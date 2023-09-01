#include "binary_trees.h"

/**
 *binary_tree_delete - deleting node in binary tree
 *@tree: pointer node
 *Return: deleted node
*/

void binary_tree_delete(binary_tree_t *tree);
{
    binary_tree_t *root;

    if(root == NULL)
        return;
    
    binary_tree_delete(root->left);
    binary_tree_delete(root->right);
    free(root);
    
}
