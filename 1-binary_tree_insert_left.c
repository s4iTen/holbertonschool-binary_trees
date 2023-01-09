#include "binary_trees.h"
/**
 * binary_tree_insert_left - this function and new node on the left
 * @parent: this is the parent of the binary tree
 * @value: this is the value that have to be stored on the new node
 * Return: Always the new node or NULL if it fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
