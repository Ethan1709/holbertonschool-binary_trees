#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: ptr on the node to measure depth
 *
 * Return: the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t a = 0, b = 0;

	if (!tree || (!tree->left && !tree->right))
			return (0);
	a = binary_tree_depth((tree->left) - 1);
	b = binary_tree_depth((tree->right) - 1);

	if (a >= b)
		return (a + 1);
	else
		return (b + 1);
}
