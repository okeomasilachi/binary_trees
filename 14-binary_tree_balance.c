#include "binary_trees.h"

/**
 * t_hgt - The function calculates the height of a binary
 *		tree by recursively finding the maximum height of its
 *		left and right subtrees and adding 1.
 * @tree: The parameter "tree" is a pointer to a binary tree node.
 *
 * Return: the height of the binary tree.
 */
size_t t_hgt(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);

	lh = t_hgt(tree->left);
	rh = t_hgt(tree->right);

	return ((lh > rh ? lh : rh) + 1);
}

/**
 * binary_tree_balance - calculates the balance factor of a
 *		binary tree by subtracting the height of the right
 *		subtree from the height of the left subtree.
 * @tree: A pointer to the root of a binary tree.
 *
 * Return: the balance factor of a binary tree. The balance
 *		factor is calculated by subtracting the
 *		height of the right subtree from the height
 *		of the left subtree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (t_hgt(tree->left) - t_hgt(tree->right));
}
