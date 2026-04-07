#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - détermine la racine
 * @node: pointeur sur structure d'abre binaire
 *
 * Return: (1) si racine, (0) si échec
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

return (0);
}
