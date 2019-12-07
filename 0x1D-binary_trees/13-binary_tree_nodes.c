#include "binary_trees.h"

/**
 * binary_tree_nodes- Function that counts the nodes of a binary tree
 * with at least 1 child
 *
 * @tree: is a pointer to the root node
 *
 * Return: Size_t number
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if ((tree->left || tree->right))
		count = binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);
		return (count);
	return (0);
}
