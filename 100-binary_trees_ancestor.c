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
	binary_tree_t *current_f = NULL, *current_s = NULL;

	if (!first || !second)
		return (NULL);

	current_f = (binary_tree_t *)first;
	while (current_f)
	{
		current_s = (binary_tree_t *)second;
		while (current_s)
		{
			if (current_f == current_s)
				return (current_f);

			current_s = current_s->parent;
		}
		current_f = current_f->parent;
	}

	return (NULL);
}
