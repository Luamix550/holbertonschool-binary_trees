#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int expectedDepth  = find_depth_left(tree);
    int check = isPerfect(tree, expectedDepth);
    return check; 
}

int find_depth_left(const binary_tree_t *tree)
{
    if(!tree)
    return (0);
    
    return (1 + find_depth_left(tree->left));
}

int isPerfect(const binary_tree_t *tree, int expectedDepth)
{
    if (!tree)
        return 0 == expectedDepth;
    if (!tree->left != !tree->right)
        return 1;
    return expectedDepth >= 0 &&
        isPerfect(tree->left, expectedDepth - 1l) &&
        isPerfect(tree->right, expectedDepth - 1);
}