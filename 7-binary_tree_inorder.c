#include "binary_trees.h"

/**
 * binary_tree_inorder - The function performs a inorder traversal
 *		on a binary tree and applies a given function to each node.
 *
 * @tree: A pointer to the root of the binary tree.
 * @func: The parameter `func` is a function pointer that points to
 *		a function with the following
 *
 * Return: Void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
