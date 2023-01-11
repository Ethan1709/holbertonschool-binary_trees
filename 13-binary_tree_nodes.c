#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: ptr on the node to count the leaves
 *
 * Return: the size
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right != NULL && tree->left != NULL)
		return (1);

	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
