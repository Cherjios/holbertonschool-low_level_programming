#include "binary_trees.h"
/**
 * binary_tree_is_full- Function that checks if a binary tree is full
 *
 * @tree: is a pointer to the root node
 *
 * Return: int value
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
