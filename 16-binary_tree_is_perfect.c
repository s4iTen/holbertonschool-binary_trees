#include "binary_trees.h"


int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int i;
    int j;
    if (tree)
    {
        i = binary_tree_balance(tree);
        j = binary_tree_is_full(tree);
        if (i == 0 && j == 1)
        return (1);
    }
    return (0); 
}