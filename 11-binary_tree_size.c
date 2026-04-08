#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_size - trouve la taille totale d'un arbre
 * @tree: pointeur sur structure
 *
 * Return: (size_max) la taille de l'arbre ou (0) si échec
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;
	size_t size_max = 0;

	if (!tree)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	size_max = 1 + size_left + size_right;

	return (size_max);
}
