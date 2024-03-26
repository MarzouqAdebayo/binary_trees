#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: the parent node of the binary tree
 * @value: the data value for the node
 * Return: the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = malloc(sizeof(binary_tree_t));
	if (!root)
		return (NULL);
	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;

	return (root);
}
