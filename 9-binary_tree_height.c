#include "binary_trees.h"
/**
 * binary_tree_height - this function mesure the height of the binary tree
 * @tree: this is the tree that we have to interract with
 * Return: left or right
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (!tree)
		return (0);
	if (tree->right)
		r = 1 + binary_tree_height(tree->right);
	if (tree->left)
		l = 1 + binary_tree_height(tree->left);
	if (l > r)
		return (l);
	return (r);
}
