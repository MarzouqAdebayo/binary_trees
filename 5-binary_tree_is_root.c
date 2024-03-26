#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if binary tree is root
 *
 * @node: binary tree node to be checked
 * Return: 1 if it is root else, 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (!!node);
	return (!node->parent);
}
