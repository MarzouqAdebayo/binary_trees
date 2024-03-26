#include "binary_trees.h"

/**
 * tree_traverse - recursively measures the height of the tree
 *
 * @node: pointer to the node of the tree
 * @height: height of the node
 * Return: the height of the tree
 */
size_t tree_traverse(const binary_tree_t *node, size_t height)
{
	size_t right, left;

	if (!node)
		return (height);
	height++;
	left = tree_traverse(node->left, height);
	right = tree_traverse(node->right, height);
	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_height - Gets the height of the tree using a helper
 *
 * @tree: pointer to the root node of the tree
 * Return: the height of the tree minus 1
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (height);
	return (tree_traverse(tree, height) - 1);
}
