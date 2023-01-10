#include "binary_trees.h"
/**
 * binary_tree_nodes - this function count the the node with at least
 * 1 child in the binary tree
 * @tree: this is the binary tree
 * Return: Always the number of the nodes or 0 if it fail
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			l = binary_tree_nodes(tree->left);
			r = binary_tree_nodes(tree->right);
			return (r + l + 1);
		}
	}
	return (0);
}
