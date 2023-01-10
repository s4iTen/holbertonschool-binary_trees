#include "binary_trees.h"
/**
 * binary_tree_depth - this function gives the depth of the node
 * @tree: this is the node that we have search the depth of
 * Return: Always the depth or NULL if it fail
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
