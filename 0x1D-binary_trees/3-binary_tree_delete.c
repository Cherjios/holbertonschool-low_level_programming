#include "binary_trees.h"

/**
 * binary_tree_delete- Function that deletes an entire binary tree
 *
 * @tree: is a pointer to the root node
 *
 * Return: return a pointer to the new node, or NULL on failure
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
	return;

/* First delete both subtrees */
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);

}
