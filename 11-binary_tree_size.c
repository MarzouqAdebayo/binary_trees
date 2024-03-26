#include "binary_trees.h"

/**
 * tree_traverse - Traverses the binary tree recursively to calculate size
 * @node: Pointer to the current node
 * @size: Pointer to the variable storing the size
 */
void tree_traverse(const binary_tree_t *node, size_t *size)
{
	if (!node)
		return;
	(*size)++;
	tree_traverse(node->left, size);
	tree_traverse(node->right, size);
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	tree_traverse(tree, &size);
	return (size);
}
