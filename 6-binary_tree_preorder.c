#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - lecture d'un arbre avec methode pre-order
 * @tree: pointeur sur structure d'arbre
 * @func: pointeur sur fonction avec un int pour argument et ne renvoie rien
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
