#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent: Pointer to the parent node of insert the left child in
 * @value: Value to store in the new node
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_child_left;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node_child_left = binary_tree_node(parent, value);

	if (new_node_child_left == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_node_child_left->left = parent->left;
		new_node_child_left->left->parent = new_node_child_left;
	}
	parent->left = new_node_child_left;
	return (new_node_child_left);
}
