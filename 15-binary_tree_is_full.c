#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if the tree is full
 * @tree: ptr to the root on the tree to check
 *
 * Return: the size
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	while (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (42);
}


