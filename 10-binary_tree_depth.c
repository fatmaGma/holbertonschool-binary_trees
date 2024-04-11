#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a
 * node in a binary tree
 * @tree: pointer to the noe to measure the depth
 * Return: 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *node = tree;

	while (node != NULL && node->parent != NULL)
	{
		node = node->parent;
		depth++;
	}
	return (depth);
}
