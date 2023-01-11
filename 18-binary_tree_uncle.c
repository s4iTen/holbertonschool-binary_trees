#include "binary_trees.h"
/**
 * binary_tree_sibling - this function gives the sibling of the node
 * @node: this is the node
 * Return: Always the node that we're looking for or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
/**
 * binary_tree_uncle - this function gives the uncle of the node
 * @node: this is the node
 * Return: Always the node that we're looking for or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
