#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: ptr on the binary tree
 *
 * Return: 2, 1 if a leaf or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (binary_tree_height(tree->left), (binary_tree_height(tree->right) + 1));
}
