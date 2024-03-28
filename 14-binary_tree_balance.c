#include "binary_trees.h"

/**
 * node_height - Recursively calculates the height of the node
 *
 * @node: Pointer to the node of the tree
 * Return: Height of the tree rooted at 'node'
 */
int node_height(const binary_tree_t *node)
{
	int left_height = 0, right_height = 0;

	if (!node)
		return (0);
	left_height = node_height(node->left);
	right_height = node_height(node->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree
 * Return: Balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	left_height = node_height(tree->left);
	right_height = node_height(tree->right);

	return (left_height - right_height);
}
