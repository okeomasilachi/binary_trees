#include "binary_trees.h"

/**
 * tree_height - The function calculates the height of a binary
 *		tree by recursively finding the maximum height of its
 *		left and right subtrees and adding 1.
 *
 * @tree: The parameter "tree" is a pointer to a binary tree node.
 *
 * Return: the height of the binary tree.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);

	lh = tree_height(tree->left);
	rh = tree_height(tree->right);

	return ((lh > rh ? lh : rh) + 1);
}

/**
 * binary_tree_height - returns the height of a binary
 *		tree minus one.
 *
 * @tree: A pointer to the root of a binary tree.
 *
 * Return: the height of the binary tree minus 1.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (tree_height(tree) - 1);
}
