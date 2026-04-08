#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_postorder - lecture d'un arbre avec methode post-order
 * @tree: pointeur sur structure d'arbre
 * @func: pointeur sur fonction avec un int pour argument et ne renvoie rien
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
