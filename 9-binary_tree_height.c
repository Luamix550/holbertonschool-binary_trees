#include "binary_trees.h"
/**
 * 
 * 
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
{
    return (0);
}
else
{
    int left_side;
    int right_side;

left_side = binary_tree_height(tree-> left);
right_side = binary_tree_height(tree-> right);
if (left_side > right_side)
{
    return left_side + 1;
}

}


}