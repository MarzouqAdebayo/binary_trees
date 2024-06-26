#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a tree left size first
 *
 * @tree: pointer to the root node
 * @func: pointer to the print function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
