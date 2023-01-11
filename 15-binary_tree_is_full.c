#include "binary_trees.h"
/**
 * binary_tree_is_full - this function check the binary tree is full
 * @tree: this is the binary tree
 * Return: always the 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left && tree->right)
			return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
		if (!tree->left && !tree->right)
			return (1);
		return (0);
	}
	return (0);
}
