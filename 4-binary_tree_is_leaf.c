#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - trouve la feuille
 * @node: pointeur sur structure d'arbre binaire
 *
 * Return: (1) si feuille, (0) si échec
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
	{
		return (1);
	}
return (0);
}
