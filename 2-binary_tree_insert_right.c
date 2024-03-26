#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node to the right of a tree node
 *
 * @parent: the parent node
 * @value: the data value to be inserted into the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child;

	new_right_child = malloc(sizeof(binary_tree_t));
	if (!new_right_child)
		return NULL;
	new_right_child->parent = parent,
	new_right_child->n = value;
	new_right_child->right = parent->right;
	new_right_child->left = NULL;
	parent->right = new_right_child;

	return (new_right_child);
}
