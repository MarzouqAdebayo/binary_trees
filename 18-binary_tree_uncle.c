#include "binary_trees.h"

/**
 * binary_tree_uncle - Gets the uncle node of a node
 *
 * @node: pointer ot the node
 * Return: pointer to the uncle node to the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (!node->parent->parent->left || !node->parent->parent->right)
		return (NULL);
	return (node->parent->n == node->parent->parent->left->n
	? node->parent->parent->right
	: node->parent->parent->left);
}
