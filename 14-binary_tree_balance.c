#include "binary_trees.h"
/**
 * binary_tree_balence - this function gives the measures the balance factor of a binary tree
 * @tree: this is the binary tree
 * Return: always the balance or 0 if it fail
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		right = 1 + binary_tree_balance(tree->right);
	return (left - right);
}
