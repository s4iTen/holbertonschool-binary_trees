#include "binary_trees.h"
/**
 * binary_tree_is_leaf - this function check if this node is the leaf
 * @node: this is the node that have to be checked
 * Return: 1 if it is the laef or 0 if its not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
