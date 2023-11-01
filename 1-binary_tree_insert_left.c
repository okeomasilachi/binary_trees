#include "binary_trees.h"

/**
 * binary_tree_insert_left - The function binary_tree_insert_left
 *		inserts a new node with the given value as the left child
 *		of the parent node.
 *
 * @parent: The parent parameter is a pointer to the parent node
 *		of the binary tree.
 * @value: The value parameter is an integer value that you want
 *		to insert into the binary tree.
 *
 * Return: a pointer to the parent node of the binary tree.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL, *new = NULL;

	if (parent == NULL || value == '\0')
	{
		return (NULL);
	}

	if (!parent->left == NULL)
	{
		new = binary_tree_node(parent, value);
		parent->left = new;
	}
	else if (parent->left != NULL)
	{
		tmp = parent->left;
		new = binary_tree_node(parent, value);
		parent->left = new;
		parent->left->left = tmp;
		tmp = NULL;
	}

	return (new);
}
