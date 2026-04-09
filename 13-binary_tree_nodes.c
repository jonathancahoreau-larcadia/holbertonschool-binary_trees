#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - trouve le nombre totale d'une feuille
 * @tree: pointeur sur structure
 *
 * Return: (leaves) la taille de l'arbre ou (0) si échec, (1); si feuille
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left = 0;
	size_t nodes_right = 0;
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	nodes_left = binary_tree_nodes(tree->left);
	nodes_right = binary_tree_nodes(tree->right);
	nodes = nodes_left + nodes_right + 1;
	return (nodes);
}
