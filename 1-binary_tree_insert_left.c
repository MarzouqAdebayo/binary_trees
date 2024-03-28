#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node to the left of a tree node
 *
 * @parent: the parent node
 * @value: the data value to be inserted into the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child;

	if (!parent)
		return (NULL);

	new_left_child = malloc(sizeof(binary_tree_t));
	if (!new_left_child)
		return (NULL);
	new_left_child->parent = parent,
	new_left_child->n = value;
	new_left_child->right = NULL;
	new_left_child->left = NULL;
	if (parent->left)
	{
		parent->left->parent = new_left_child;
		new_left_child->left = parent->left;
		parent->left = new_left_child;
	}
	else
		parent->left = new_left_child;

	return (new_left_child);
}
