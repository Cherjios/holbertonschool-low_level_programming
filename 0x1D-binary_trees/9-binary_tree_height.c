#include "binary_trees.h"

/**
 * getting_height- Function that measures the height of a node
 *
 * @tree: is a pointer to the root node
 *
 * Return: Size_t number
 */
size_t getting_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = getting_height(tree->left);
	right = getting_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
/**
 * binary_tree_height- Function that measures the height of a binary tree
 *
 * @tree: is a pointer to the root node
 *
 * Return: Size_t number
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t result;

	if (!tree)
		return (0);

	result = getting_height(tree) - 1;

	return (result);
}
