#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: ptr on the node to measure depth
 *
 * Return: the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t a = 0;

	if (!tree)
		return (0);

	while(tree->parent)
	{
		a++;
		tree=tree->parent;
	}
	return (a);
}
