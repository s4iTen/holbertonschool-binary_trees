#include "binary_trees.h"

int height(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	if (tree->right)
		r = 1 + height(tree->right);
	if (tree->left)
		l = 1 + height(tree->left);
	if (l > r)
		return (l);
	return (r);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree)
        {
            if (height(tree->left) == height(tree->right))
            {
                if (tree->left && tree->right)
                    return (binary_tree_is_perfect(tree->left)
                    && binary_tree_is_perfect(tree->right));
                return (1);
            }
            return (0);
        }
    return (0);
}