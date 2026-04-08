#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - profondeur d'un arbre
 * @tree: pointeur sur une struture pour abre
 *
 * Return: (depth) pour retourner la valeur de la profondeur,
 * (0) si échec.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);

	depth = 1 + binary_tree_depth(tree->parent);

return (depth);
}
