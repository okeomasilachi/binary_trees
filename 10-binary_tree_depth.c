#include "binary_trees.h"

/**
 * binary_tree_depth - The function calculates the depth of a
 *		node in a binary tree.
 *
 * @tree: A pointer to a node in a binary tree.
 *
 * Return: the depth of a binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t pd = 0;

	if (tree == NULL)
		return (0);

	pd = binary_tree_depth(tree->parent);
	if (tree && tree->parent == NULL)
		return (pd);
	return (pd + 1);
}
