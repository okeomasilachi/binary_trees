#include "binary_trees.h"

/**
 * tree_h - The function calculates the height of a binary
 *		tree by recursively finding the maximum height of its
 *		left and right subtrees and adding 1.
 *
 * @tree: The parameter "tree" is a pointer to a binary tree node.
 *
 * Return: the height of the binary tree.
 */
size_t tree_h(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);

	lh = tree_h(tree->left);
	rh = tree_h(tree->right);

	return ((lh > rh ? lh : rh) + 1);
}

/**
 * nodes - calculates the number of nodes in a
 *		binary tree.
 * @tree: A pointer to the root of a binary tree.
 *
 * Return: the number of nodes in a binary tree.
 */
size_t nodes(const binary_tree_t *tree)
{
	size_t ls = 0, rs = 0;

	if (tree == NULL)
		return (0);

	ls = nodes(tree->left);
	rs = nodes(tree->right);

	/**
	 * (tree->left || tree->right) is checking whether either
	 * the left or right subtree of the tree is not empty.
	*/
	return (ls + rs + (tree->left || tree->right));
}

/**
 * _pow - calculates the power of a number by multiplying
 *		it by itself a specified number of times.
 * @num: The base number that will be raised to the power
 *		of exp.
 * @exp: The exponent to which the number will be raised.
 *
 * Return: the result of raising the number `num` to the
 *		power of `exp`.
 */
int _pow(int num, int exp)
{
	int answer = 1, i;

	for (i = 0; i < exp; i++)
		answer *= num;

	return (answer);
}

/**
 * binary_tree_is_perfect - The function checks if a binary
 *		tree is perfect by comparing the number of nodes in
 *		the tree with the expected number of nodes in a
 *		perfect binary tree of the same height.
 * @tree: A pointer to the root of a binary tree.
 *
 * Return: 1 if the binary tree is perfect, and 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0, n = 0, ran = 0;

	if (tree == NULL)
		return(0);

	n = nodes(tree);
	h = tree_h(tree) - 1;
	ran = _pow(2, h) - 1;
	if (ran == n)
		return (1);
	return (0);
}
