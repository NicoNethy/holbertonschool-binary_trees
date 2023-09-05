#include "binary_trees.h"

/**
 *binary_tree_is_leaf - checking to see if binary tree is a leaf
 *@node: node to check leaf status
 Return: 1 if its leaf 
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if(node == NULL)
        return(0);

    if(node->right == NULL && node->left == NULL)
        return(1);

return(0);

}