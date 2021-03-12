#include "binary_trees.h"

/**
 * binary_tree_depth - the depth
 *
 * @node: To find the depth
 *
 * Return: size_t depth of node
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t counter;

	if (node == NULL)
		return (0);

	counter = 0;

	while (node->parent)
	{
		counter++;
		node = node->parent;
	}
	return (counter);
}
