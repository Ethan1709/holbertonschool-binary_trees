#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree in-order traversal
 * @tree: ptr on the binary tree
 * @func: ptr to a function to call for each node
 *
 * Return: 1 if a leaf or 0
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_inorder(tree->left->left, func);
	binary_tree_inorder(tree->right, func);
}
