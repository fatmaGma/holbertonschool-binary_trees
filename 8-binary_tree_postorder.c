#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - parcourt un arbre binaire en utilisant le post-ordre
 * @tree: pointeur vs le node racine de l'arbre a parcourir
 * @func: pointeur vs une fonct°a appeler pr chq node
 * la valeur ds node doit etre pass�e en parametre a cette fonct°
 * si NULL rien faire
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* verifie si l'arbre ou la fonct°*/
	if (tree == NULL || func == NULL)
		return;

	/* parcourt recursivement le sous-arbre gauche */
	binary_tree_postorder(tree->left, func);

	/* parcourt recursivement le sous-arbre droit */
	binary_tree_postorder(tree->right, func);

	/* apllique la fonct°sur la valeur du node actuel */
	func(tree->n); }
