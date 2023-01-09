#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as a left-child
 * @parent: the parent ptr
 * @value: value of each node
 *
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_l;

	if (parent == NULL)
		return (NULL);

	new_node_l = malloc(sizeof(binary_tree_t));
	if (new_node_l == NULL)
		return (NULL);
	new_node_l->n = value;
	new_node_l->parent = parent;
	new_node_l->left = NULL;
	new_node_l->right = NULL;
	if (parent->left != NULL)
	{
		new_node_l->left = parent->left;
		new_node_l->left->parent = new_node_l;
	}
	parent->left = new_node_l;

	return (new_node_l);
}
