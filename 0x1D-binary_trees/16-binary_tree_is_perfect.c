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
/**
 * binary_tree_is_perfect- Function that checks if a binary tree
 * is perfect
 *
 * @tree: is a pointer to the root node
 *
 * Return: int value
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lside = 0, rside = 0;

	if (!tree)
		return (0);

	lside = binary_tree_height(tree->left);
	rside = binary_tree_height(tree->right);

	if (lside != rside)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left != NULL) && (tree->right != NULL))
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	else
		return (0);
}
