#include "binary_trees.h"

/**
 * binary_tree_is_root- Function that checks if a node is a root
 *
 * @node: is a pointer to the node to check
 *
 * Return: return 1 is node is a leaf, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left != NULL && node->right != NULL)
		return (1);
	binary_tree_is_root(node->left);
	binary_tree_is_root(node->right);
	return (0);
}
