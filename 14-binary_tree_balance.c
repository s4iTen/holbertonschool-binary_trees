#include "binary_trees.h"
/**
 * height - this function count the height of the binary tree
 * @tree: this is the node
 * Return: Always the height or 0
 */
int height(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	if (tree->right)
		r = 1 + height(tree->right);
	if (tree->left)
		l = 1 + height(tree->left);
	if (l > r)
		return (l);
	return (r);
}
/**
 * binary_tree_balance - this func gives the balance factor of a binary tree
 * @tree: this is the binary tree
 * Return: always the balance or 0 if it fail
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	return (height(tree->left) - height(tree->right));
}
