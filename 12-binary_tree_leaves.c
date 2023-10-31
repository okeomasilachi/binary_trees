#include "binary_trees.h"

/**
 * binary_tree_leaves - returns the number of leaves in a binary tree.
 * @tree: A pointer to the root of a binary tree.
 *
 * Return: the number of leaves in the binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lv1, lv2;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);
	lv1 = binary_tree_leaves(tree->left);
	lv2 = binary_tree_leaves(tree->right);

	return (lv1 + lv2);
}
