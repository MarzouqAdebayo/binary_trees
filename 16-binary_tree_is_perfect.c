#include "binary_trees.h"

/**
 * check_perfect_tree - Recursively checks if a binary tree is perfect
 *
 * @node: Pointer to the current node
 * @height: Height of the current node
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int check_perfect_tree(const binary_tree_t *node, int height)
{
	int left, right;

	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (height + 1);
	if (node->left && node->right)
	{
		left = check_perfect_tree(node->left, height + 1);
		right = check_perfect_tree(node->right, height + 1);
		return (left == right && left && right);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (check_perfect_tree(tree, 0));
}
