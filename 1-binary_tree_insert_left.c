#include "binary_trees.h"
/**
 * 
 * 
 * 
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{


binary_tree_t *new_node_izq = binary_tree_node(parent,  value);

new_node_izq->left = parent->left;
parent->left = new_node_izq;

return (new_node_izq);
}
