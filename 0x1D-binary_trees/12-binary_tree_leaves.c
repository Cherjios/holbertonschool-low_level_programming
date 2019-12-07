#include "binary_trees.h"

/**
 * binary_tree_leaves- Function that counts the leaves of a binary tree
 *
 * @tree: is a pointer to the root node
 *
 * Return: Size_t number
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (count);
}
