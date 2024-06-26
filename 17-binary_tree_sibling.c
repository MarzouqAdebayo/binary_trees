#include "binary_trees.h"

/**
 * binary_tree_sibling - Gets the sibling of a node
 *
 * @node: pointer to the node
 * Return: pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->left || !node->parent->right)
		return (NULL);
	return (
		node->n == node->parent->left->n
		? node->parent->right
		: node->parent->left);
}
