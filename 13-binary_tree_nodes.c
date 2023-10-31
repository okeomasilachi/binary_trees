#include "binary_trees.h"

/**
 * binary_tree_nodes - calculates the number of nodes in a
 *		binary tree.
 * @tree: A pointer to the root of a binary tree.
 *
 * Return: the number of nodes in a binary tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t ls = 0, rs = 0;

	if (tree == NULL)
		return (0);

	ls = binary_tree_nodes(tree->left);
	rs = binary_tree_nodes(tree->right);

	/**
	 * (tree->left || tree->right) is checking whether either
	 * the left or right subtree of the tree is not empty.
	*/
	return (ls + rs + (tree->left || tree->right));
}
