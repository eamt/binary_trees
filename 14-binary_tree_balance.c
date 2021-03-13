#include "binary_trees.h"

/**
 * find_balance - Find the difference between the left and right nodes
 * @tree: tree trunk to start from
 * Return: height of each branch
 */

int find_balance(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (-1);

	lheight = find_balance(tree->left) + 1;
	rheight = find_balance(tree->right) + 1;

	if (lheight > rheight)
		return (lheight);
	else
		return (rheight);
}
