#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_insert_right- Function that inserts a
 * node as the rigth-child of another node
 *
 * @parent: is a pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: return a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

binary_tree_t *new_node = NULL;

if (!parent)
	return (NULL);

new_node = calloc(1, sizeof(binary_tree_t));
if (!new_node)
	return (NULL);

new_node->n = value;
new_node->parent = parent;
if (parent->right)
{
	new_node->right = parent->right;
	new_node->right->parent = new_node;
}
parent->right = new_node;
return (new_node);
}
