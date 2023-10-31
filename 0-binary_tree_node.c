#include "binary_trees.h"

/**
 * binary_tree_node - The function creates a new binary tree node
 *		with the given value and parent.
 *
 * @parent: The parent parameter is a pointer to the parent node
 *		of the new node being created. It represents the node
 *		that will be the parent of the new node in the binary tree.
 * @value: The value parameter is an integer value that will be
 *		assigned to the "n" member of the newly created
 *		binary_tree_t node.
 *
 * Return: a pointer to a binary_tree_t structure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	new->parent = parent;

	return (new);
}
