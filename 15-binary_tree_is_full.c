#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full,
 *		meaning every node has either 0 or 2 children.
 * @tree: A pointer to the root of a binary tree.
 *
 * Return: an integer value.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else if (!tree->left || !tree->right)
		return (0);

	return (binary_tree_is_full(tree->left) &&
	binary_tree_is_full(tree->right));
}
