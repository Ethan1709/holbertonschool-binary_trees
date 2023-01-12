#include "binary_trees.h"

/**
 * binary_tree_height_rec - measures depth of a binary tree right
 * @tree: ptr to the root node of the tree to measure balance factor
 *
 * Return: the balance factor
 */


int binary_tree_height_rec(const binary_tree_t *tree)
{
	int a = 0, b = 0, h = 0;

	if (!tree)
		return (0);

	a = binary_tree_height_rec(tree->left);
	b = binary_tree_height_rec(tree->right);

	if (a < b)
		h = b + 1;
	else
		h = a + 1;
	return (h);
}

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: ptr to the root node of the tree to measure balance factor
 *
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height_rec(tree->left) -
		binary_tree_height_rec(tree->right));
}
