#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - trouve le nombre totale d'une feuille
 * @tree: pointeur sur structure
 *
 * Return: (leaves) la taille de l'arbre ou (0) si échec, (1); si feuille
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left = 0;
	size_t leaves_right = 0;
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);
	leaves = leaves_left + leaves_right;
	return (leaves);
}
