#include "binary_trees.h"
/**
 * _depth - this function gives the depth of the node
 * @tree: this is the node that we have search the depth of
 * Return: Always the depth or NULL if it fail
 */
size_t _depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth = 1 + _depth(tree->parent);
	return (depth);
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
	if (first || second)
	{
		if (_depth(first) == _depth(second))
			return (first->parent);
		if (first->parent == second)
			return ((binary_tree_t *)second);
		if (second->parent == first)
			return ((binary_tree_t *)first);
		if (_depth(first) > _depth(second))
			return (second->parent);
		else
			return (first->parent);
	}
	return (NULL);
}
