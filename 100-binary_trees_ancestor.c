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
int is_child(const binary_tree_t *tree, int sec)
{
	if (tree)
	{
		if (tree->n == sec)
			return (1);
		is_child(tree->left, sec);
		is_child(tree->right, sec);
	}
	return (0);
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
	int i = is_child(first, second->n),
	j = is_child(second, first->n);
	if (first || second)
	{
		if (first == second)
			return ((binary_tree_t *)first);	
		if (i == 1)
			return ((binary_tree_t*)first);
		if (j == 1)
			return ((binary_tree_t *)second);
		if (_depth(first) == _depth(second) 
		&& first->parent == second->parent)
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
