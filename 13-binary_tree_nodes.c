#include "binary_trees.h"

/**
 *binary_tree_nodes- finding the nodes of a binary tree
 *@tree: tree structure 
 Return: number of nodes of tree structure
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t left_count;
    size_t right_count;
    
    if(tree == NULL)
        return(0);
    
    left_count = binary_tree_nodes(tree->left);
    right_count = binary_tree_nodes(tree->right);

    return(1 + left_count + right_count);

}