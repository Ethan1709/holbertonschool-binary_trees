#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 * @node: ptr on the node to find the sibling
 *
 * Return: a ptr to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
	{
		node = node->parent->right;
		return (node);
	}
	if (node->parent->right == node)
	{
		node = node->parent->left;
		return (node);
	}
	return (NULL);
}
