#include "binary_trees.h"

/**
 * binary_tree_depth_right - measures depth of a binary tree right
 * @tree: ptr to the root node of the tree to measure balance factor
 *
 * Return: the balance factor
 */

int binary_tree_depth_right(const binary_tree_t *tree)
{
	int b = 0;

	while (tree->right)
	{
		b++;
		tree = tree->right;
	}
	return (b);
}
/**
 * binary_tree_depth_left - measures depth of a binary tree  left
 * @tree: ptr to the root node of the tree to measure balance factor
 *
 * Return: the balance factor
 */

int binary_tree_depth_left(const binary_tree_t *tree)
{
	int a = 0;

	while (tree->left)
	{
		a++;
		tree = tree->left;
	}
	return (a);
}

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: ptr to the root node of the tree to measure balance factor
 *
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	int a = 0, b = 0;

	if (!tree)
		return (0);
	a = binary_tree_depth_left(tree);
	b = binary_tree_depth_right(tree);

	balance = a - b;
	return (balance);
}
