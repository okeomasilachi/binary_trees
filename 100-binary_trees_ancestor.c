#include "binary_trees.h"


/**
 * binary_trees_ancestor - finds the lowest common ancestor of
 *		two nodes in a binary tree.
 * @first: A pointer to the first binary tree node.
 * @second: The "second" parameter is a pointer to a binary
 *		tree node.
 *
 * Return: The function `binary_trees_ancestor` returns a
 *		pointer to the lowest common ancestor of the two
 *		given binary tree nodes `first` and `second`.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *current_first = NULL, *current_second = NULL;

	if (!first || !second)
		return (NULL);

	current_first = (binary_tree_t *)first;
	while (current_first)
	{
		current_second = (binary_tree_t *)second;
		while (current_second)
		{
			if (current_first == current_second)
				return (current_first);

			current_second = current_second->parent;
		}
		current_first = current_first->parent;
	}

	return (NULL);
}
