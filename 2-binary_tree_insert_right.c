#include "binary_trees.h"
/**
 * binary_tree_insert_right - this function and new node on the righ
 * @parent: this is the parent of the binary tree
 * @value: this is the value that have to be stored on the new node
 * Return: Always the new node or NULL if it fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
