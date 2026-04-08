#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - hauteur d'un arbre
 * @tree: pointeur sur une struture pour abre
 *
 * Return: (left_height + 1) pour retourner le valeur de la taille
 * des arretes gauche, (left_height + 1) celle des arretes droite
 * (0) si échec.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
