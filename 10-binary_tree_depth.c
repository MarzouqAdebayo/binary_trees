#include "binary_trees.h"

/**
 * binary_tree_depth - Gets the depth of a node in a tree
 *
 * @tree: pointer to the node
 * Return: the depth of the node in the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree || !tree->parent)
		return (depth);
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
