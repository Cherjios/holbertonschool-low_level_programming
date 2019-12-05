#include "binary_trees.h"

/**
 * binary_tree_postorder- Function that goes using post-order traversal
 *
 * @tree: is a pointer to the root node
 * @func: is a pointer to a function to call for each node
 *
 * Return: Void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
