#include "binary_trees.h"

/**
 * binary_tree_delete - The function recursively deletes a binary
 *		tree by freeing each node.
 *
 * @tree: The parameter "tree" is a pointer to the root node of
 *		a binary tree.
 *
 * Return: void, which means it is not returning any value.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
