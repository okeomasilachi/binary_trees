#include "binary_trees.h"

/**
 * binary_tree_preorder - The function performs a preorder traversal
 *		on a binary tree and applies a given function to each node.
 *
 * @tree: A pointer to the root of the binary tree.
 * @func: The parameter `func` is a function pointer that points to
 *		a function with the following
 *
 * Return: Void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
