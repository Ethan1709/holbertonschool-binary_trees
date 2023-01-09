#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as a right-child
 * @parent: the parent ptr
 * @value: value of each node
 *
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_r;

	if (parent == NULL)
		return (NULL);

	new_node_r = malloc(sizeof(binary_tree_t));
	if (new_node_r == NULL)
		return (NULL);
	new_node_r->n = value;
	new_node_r->parent = parent;
	new_node_r->left = NULL;
	new_node_r->right = NULL;
	if (parent->right != NULL)
	{
		new_node_r->right = parent->right;
		new_node_r->right->parent = new_node_r;
	}
	parent->right = new_node_r;

	return (new_node_r);
}
