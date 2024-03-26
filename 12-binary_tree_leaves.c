#include "binary_trees.h"

/**
 * tree_traverse - Traverses the binary tree recursively to calculate the
 * no of leaves
 * @node: Pointer to the current node
 * @no_of_leaves: Pointer to the variable storing the number of leaves
 */
void tree_traverse(const binary_tree_t *node, size_t *no_of_leaves)
{
	if (!node)
		return;
	if (!node->left && !node->right)
		(*no_of_leaves)++;
	tree_traverse(node->left, no_of_leaves);
	tree_traverse(node->right, no_of_leaves);
}

/**
 * binary_tree_leaves - Get the number of leaves in a tree or sub-tree
 *
 * @tree: pointer to the root node of tree or sub-tree
 * Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t no_of_leaves = 0;

	if (!tree)
		return (0);
	tree_traverse(tree, &no_of_leaves);
	return (no_of_leaves);
}
