#include "binary_trees.h"
/**
 * binary_tree_node - this function create a new node
 * @parent: this is the root of the binary tree
 * @value: this is the value that have to be stored in the data of the new node
 * Return: Always the new node or NULL if it fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
