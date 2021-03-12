#include "binary_trees.h"
/**
 * binary_tree_preorder - preorder traversal  print values
 *
 * @tree: Tree or node to print
 * @func: Function to execute
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
