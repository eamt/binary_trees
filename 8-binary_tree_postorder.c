#include "binary_trees.h"

/**
 * binary_tree_postorder - preorder traversal to print values
 *
 * @tree: tree or node to print
 * @func: Function to execute
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
