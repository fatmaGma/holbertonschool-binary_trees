#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Calcule la hauteur d'un arbre binaire
 * @tree: Un pointeur vers le nœud racine de l'arbre
 *
 * Return: La hauteur de l'arbre, ou 0 si l'arbre est NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (1 + (height_left > height_right ? height_left : height_right));
}

/**
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfai
 * @tree: Un pointeur vers le nœud racine de l'arbre
 *
 * Return: 1 si l'arbre est parfait, 0 sinon ou si l'arbre est NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
