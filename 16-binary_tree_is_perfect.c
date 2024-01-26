#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{

    int check = isPerfect(tree);
    return check;
}

int find_depth_left(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    return 1 + find_depth_left(tree->left);
}

int isPerfect(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    if ((!tree->left && tree->right) || (tree->left && !tree->right))
        return 0;

    return isPerfect(tree->left) && isPerfect(tree->right);
}