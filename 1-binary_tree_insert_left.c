#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: new node left
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node_left;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node_left = binary_tree_node(parent, value);

	if (new_node_left == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
	new_node_left->left = parent->left;
	parent->left->parent = new_node_left;
	}
	parent->left = new_node_left;

return (new_node_left);
}
