#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Retuns 1 if leaf 0 if not.
 *
 * @node Check leaf or not
 * Return: 0 or 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left || node->right)
		return (0);
	else
		return (1);
}
