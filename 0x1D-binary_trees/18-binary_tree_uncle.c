#include "binary_trees.h"

/**
 * binary_tree_sibling- Function that finds the sibling of a node
 *
 * @node: is a pointer to the root node
 *
 * Return: Size_t number
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
/**
 * binary_tree_uncle- Function that finds the uncle of a node
 *
 * @node: is a pointer to the root node
 *
 * Return: Size_t number
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
