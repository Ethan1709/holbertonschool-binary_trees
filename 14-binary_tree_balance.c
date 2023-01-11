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

	if (!tree)
		return (0);
	while (tree->right || tree->left)
	{
		b++;
		tree = tree->right;
		if (!tree->right->right && !tree->right->left)
			tree = tree->left;
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

	if (!tree)
		return (0);
	while (tree->left || tree->left)
	{
		a++;
		tree = tree->left;
		if (!tree->left->left && !tree->left->right)
			tree = tree->right;
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

/**
 * binary_tree_height_rec - measures depth of a binary tree right
 * @tree: ptr to the root node of the tree to measure balance factor
 *
 * Return: the balance factor
 */


/***
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
***/

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: ptr to the root node of the tree to measure balance factor
 *
 * Return: the balance factor
 */
/***
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height_rec(tree->left) -
		binary_tree_height_rec(tree->right));
}

***/
