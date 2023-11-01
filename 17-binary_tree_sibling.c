#include "binary_trees.h"

/**
 * binary_tree_sibling - returns the sibling of a given node in a
 *		binary tree.
 * @node: A pointer to a node in a binary tree.
 *
 * Return: a pointer to the sibling node of the given node
 *		in a binary tree.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == node)
		tmp = node->parent->left;
	else if (node->parent->left == node)
		tmp = node->parent->right;

	return (tmp);
}
