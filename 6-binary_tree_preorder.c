#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a tree left size first
 *
 * @tree: pointer to the root node
 * @func: pointer to the print function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
