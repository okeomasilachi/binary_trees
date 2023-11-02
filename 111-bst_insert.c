#include "binary_trees.h"

/**
 * bst_insert - inserts a new node with a given value
 *		into a binary search tree.
 * @tree: A double pointer to the root of the binary
 *		search tree.
 * @value: The value to be inserted into the binary
 *		search tree.
 *
 * Return: pointer to a binary search tree (bst_t).
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *bst = NULL, *bst_p = NULL;

	(void)tree, (void)value;

	if ((*tree) == NULL)
	{
		(*tree) = binary_tree_node((*tree), value);
		return ((*tree));
	}
	else
	{
		bst = (*tree);
		bst_p = NULL;
		while (true)
		{
			bst_p = bst;
			if (value < bst_p->n)
			{
				bst = bst->left;
				if (bst == NULL)
				{
					bst_p->left = binary_tree_node(bst_p->left, value);
					return (bst_p->left);
				}
			}
			else
			{
				bst = bst->right;
				if (bst == NULL)
				{
					bst_p->right = binary_tree_node(bst_p->right, value);
					return (bst_p->right);
				}
			}
		}
	}
}
