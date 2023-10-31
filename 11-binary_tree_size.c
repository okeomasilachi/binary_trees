#include "binary_trees.h"

/**
 * binary_tree_size - The function calculates the size of a binary
 *		tree by recursively counting the number of nodes in the
 *		left and right subtrees and adding 1 for the root node.
 *
 * @tree: A pointer to the root node of a binary tree.
 *
 * Return: the size of the binary tree, which is the total
 *		number of nodes in the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lz, rz;

	if (tree == NULL)
		return (0);

	lz = binary_tree_size(tree->left);
	rz = binary_tree_size(tree->right);

	return (lz + rz + 1);
}
