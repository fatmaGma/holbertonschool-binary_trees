#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - verifie si un node est une feuille
 * @node: pointeur vs le node a verifier
 *
 * Return: renvoie 1 si le node est 1 feuille sinn 0 si node est NULL renvoie 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* verifie si node est NULL */
	if (node == NULL)
		return (0);

	/* verifie si node n'a enft gauche et droit */
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
