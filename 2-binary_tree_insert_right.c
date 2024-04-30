#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *                           If parent already has a right-child, the new node
 *                           must take its place, and the old right-child must
 *                           be set as the right-child of the new node.
 *
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child = NULL;

	if (parent == NULL)
		return (NULL);

	right_child = malloc(sizeof(binary_tree_t));

	if (right_child == NULL)
		return (NULL);

	right_child->parent = parent;
	right_child->n = value;
	right_child->left = NULL;
	right_child->right = NULL;

	if (parent->right != NULL)
	{
		right_child->right = parent->right;
		right_child->right->parent = right_child;
	}
	parent->right = right_child;

	return (right_child);
}
