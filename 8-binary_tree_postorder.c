#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a tree left size first
 *
 * @tree: pointer to the root node
 * @func: pointer to the print function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}