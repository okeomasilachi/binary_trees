#include "binary_trees.h"

/**
 * is_bst - Utility function to recursively
 *		check if a binary tree is a BST
 * @tree: pointer to a binary tree structure.
 * @vsl: minimum value the node can have
 * @vll: maximum value the node can have
 *
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */
int is_bst(const binary_tree_t *tree, int vsl, int vll)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= vsl || tree->n >= vll)
		return (0);

	return (is_bst(tree->left, vsl, tree->n) &&
	is_bst(tree->right, tree->n, vll));
}


/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to a binary tree structure.
 *
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst(tree, INT_MIN, INT_MAX));
}
