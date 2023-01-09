#include "binary_trees.h"
/**
 * binary_tree_postorder - this function goes trought the binary tree
 * and execute the function with Post-Order
 * @tree: this is the root of the binary tree
 * @func: this is the function that hae te be executed
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
