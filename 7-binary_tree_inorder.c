#include "binary_trees.h"

/**
 *binary_tree_preorder- a type of tree traversal that follows the Root-Left-Right policy 
 *@tree: tree structure 
 Return: check on tree structure
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if(tree == NULL || func == NULL)
        return;

    binary_tree_inorder(tree->left, func);
    printf("%d ", tree->n);
    
    func(tree->n);

    binary_tree_inorder(tree->right, func);
}