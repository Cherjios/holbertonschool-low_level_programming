#include "binary_trees.h"

/**
 * binary_tree_depth- Function that measures the depht of a binary tree
 *
 * @tree: is a pointer to the root node
 *
 * Return: Size_t number
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
