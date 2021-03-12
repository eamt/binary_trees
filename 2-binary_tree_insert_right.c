#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the left, if not null
 *@parent: Parent node
 * @value: Value to add to the node
 *Return: The pointer to the  node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;

	if (parent->right)
	{
		node->right = parent->right;
		node->parent = parent;
		parent->right->parent = node;
		parent->right = node;
		node->left = NULL;
	}
	else
	{
		parent->right = node;
		node->parent = parent;
		node->right = NULL;
		node->left = NULL;
	}
	return (node);
}
