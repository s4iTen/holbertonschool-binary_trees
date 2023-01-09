#include "binary_trees.h"
/**
 * binary_tree_inorder - this function goes trought the binary tree
 * and execute the function after that
 * @tree: this is the root of the binary tree
 * @func: this is the function that have to be executed
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
