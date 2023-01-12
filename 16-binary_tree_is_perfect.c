#include "binary_trees.h"

/**
 * height_perf - checks if the height of the tree
 * @tree: ptr to the root on the tree to check
 *
 * Return: a or b
 */

int height_perf(const binary_tree_t *tree)
{
	int a = 0, b = 0;

	if (!tree)
		return (0);

	a = height_perf(tree->left);
	b = height_perf(tree->right);

	if (a >= b)
		return (a + 1);
	else
		return (b + 1);
}


/**
 * tree_full - checks if the tree is full
 * @tree: ptr to the root on the tree to check
 *
 * Return: 1 is success or 0 if fail
 */

int tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height_perf(tree->left) - height_perf(tree->right));
}


/**
 * binary_tree_is_perfect - checks if the tree is perfect
 * @tree: ptr to the root on the tree to check
 *
 * Return: 1 is success or 0 if fail
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int a = 0, b = 0, z = 0, y = 0;

	if (!tree)
		return (0);

	a = height_perf(tree->left);
	b = height_perf(tree->right);

	if (a != b)
		return (0);

	z = tree_balance(tree->left);
	y = tree_balance(tree->right);

	if (z != y)
		return (0);
	return (1);
}
