#include "binary_trees.h"

/**
 * binary_tree_nodes - Function to count the nodes with 1 child or more
 * @tree: node to start measuring
 * Return:  nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	else
		return (0);
}
