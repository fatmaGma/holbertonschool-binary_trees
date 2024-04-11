#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - parcourt un arbre binaire avc pre-commande
 * @tree: pointer vs le node racine de l'arbre a parcourir
 * @func: pointer vs une fonct°a appeler pr chq node
 * la valeur ds le node doit etre passe en parametre a cette fonct�
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* verifie si l'arbre ou la fonction est NULL */
	if (tree == NULL || func == NULL)
		return;

	/* applique la fonct°sur la valeur du node actuel */
	func(tree->n);

	/* parcourt recursivement le sous_arbre gauche */
	binary_tree_preorder(tree->left, func);

	/* parcourt recursivemeny le sous-arbre droit */
	binary_tree_preorder(tree->right, func);
}
