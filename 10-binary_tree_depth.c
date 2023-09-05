#include "binary_trees.h"

/**
 *binary_tree_depth- finding the depth of a binary tree
 *@tree: tree structure 
 Return: depth of tree structure
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
    int left_side;
    int right_side;
    
    if(tree == NULL)
        return(0);

    left_side = binary_tree_depth(tree->left);
    right_side = binary_tree_depth(tree->right);
    
    if(left_side > right_side)
    {
        return (left_side + 1);
    }
    else
    {
        return (right_side + 1);
    }
}   
