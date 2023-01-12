#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: ptr on the node to find the uncle
 *
 * Return: a ptr to the sibling node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent)
	{
		node = node->parent;
		if (!node->parent)
			return (NULL);
		if (node->parent->right == node)
			return (node->parent->left);
		if (node->parent->left == node)
			return (node->parent->right);
	}
	return (NULL);
}
