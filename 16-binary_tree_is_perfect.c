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
 * tree_balance - checks if the tree is full
 * @tree: ptr to the root on the tree to check
 *
 * Return: balance if success or 0 if fail
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
 * Return: 1 if success or 0 if fail
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect;

	perfect = tree_balance(tree);
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL &&
		perfect == 0)
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
	return (0);
}
