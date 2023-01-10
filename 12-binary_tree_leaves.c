#include "binary_trees.h"
/**
 * binary_tree_leaves - this function count the leaves of the binary tree
 * @tree: this is the binary tree
 * Return: Always the leaves of the binary tree or 0 if it fail
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
