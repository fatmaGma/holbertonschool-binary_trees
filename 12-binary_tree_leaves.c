#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - compte les feuilles dans un arbre binaire
 * @tree: pointeur vs le node racinede l'arbrepr cmpter le nbre de feuilles
 *
 * Return: le nbre de feuille ds l'arbre,ou 0 si l'arbre est NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* si l'arbre est NULL, le nbre de feuille est 0 */
	if (tree == NULL)
		return (0);

	/* si le node est une feuille, le nbre de feuille est 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* sinon; le nbre de feuille est la som des feuilles */
	/* des sous-arbres gauche et droit */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
