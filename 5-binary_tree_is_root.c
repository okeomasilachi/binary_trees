#include "binary_trees.h"

/**
 * binary_tree_is_root - The function checks if a given node
 *		in a binary tree is the root node.
 * @node: A pointer to a node.
 *
 * Return: 1 if the given node is the root node
 *		(i.e., it has no parent), and 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);

	return (0);
}
