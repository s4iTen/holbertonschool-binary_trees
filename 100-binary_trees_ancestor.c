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
 * binary_tree_ancestor - this function find the lowest common
 * ancestor of two nodes
 * @first: this is the first node
 * @second: this is the second node
 * Return: it depends the conditions
 */
binary_tree_t
*binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (second->parent == first)
		return ((binary_tree_t *)first);
	else if (first->parent == second)
		return ((binary_tree_t *)second);
	if (height(first) > height(second))
		return (second->parent);
	else
		return (first->parent);
}
