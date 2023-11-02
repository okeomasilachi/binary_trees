#include "binary_trees.h"

/**
 * binary_tree_levelorder - performs a level-order
 *		traversal of a binary tree and applies a
 *		given function to each node.
 * @tree: The parameter "tree" is a pointer to a
 *		binary tree structure.
 * @func: The parameter `func` is a function pointer
 *		that points to a function that takes an integer
 *		as an argument and returns void. This function
 *		will be called on each node of the binary tree in
 *		level order traversal.
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		if (tree->left->n)
			func(tree->left->n);
		if (tree->right->n)
			func(tree->right->n);
		binary_tree_levelorder(tree->left, func);
		binary_tree_levelorder(tree->right, func);
	}
}
