#include "binary_trees.h"

/**
 *binary_trees_insert_right = inserts a node as the right-chold of another node 
 *@parent: a pointer
 *@value: value
 *Return: pointer to the created node, or NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node; 

    if(parent == NULL)
        return (NULL);

    node = malloc(sizeof(binary_tree_t));

    if(node == NULL)
        return(NULL);
    
    node->n = value;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;

    if(parent->right != NULL)
    {
        node->right = parent->right;
        parent->right->parent = node;
    }
    parent->left = node; 

    return(node);
}