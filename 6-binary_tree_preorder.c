#include "binary_trees.h"
/**
 * binary_tree_preorder - this function goes trought the binary tree
 * and execute the function every time it goes throught it setf again
 * @tree: this is the root of the binary tree
 * @func: this function that have to execute every time
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
