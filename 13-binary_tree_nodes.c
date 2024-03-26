#include "binary_trees.h"

/**
 * tree_traverse - Traverses the binary tree recursively to calculate size
 * @node: Pointer to the current node
 * @size: Pointer to the variable storing the size
 */
void tree_traverse(const binary_tree_t *node, size_t *count)
{
	if (!node)
		return;
	if (node->left || node->right)
		(*count)++;
	tree_traverse(node->left, count);
	tree_traverse(node->right, count);
}

/**
 *
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	tree_traverse(tree, &count);
	return (count);
}

