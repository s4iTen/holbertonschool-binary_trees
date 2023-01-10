#include "binary_trees.h"
/**
 * binary_tree_size - this function give u the size of the binary tree
 * @tree: this is the node that we pointed on
 * Return: Always the size or 0 if it fail
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = binary_tree_size(tree->left);
	if (tree->right)
		r = binary_tree_size(tree->right);
	return (r + l + 1);
}
