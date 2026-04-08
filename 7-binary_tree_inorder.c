#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - lecture d'un arbre avec methode in-order
 * @tree: pointeur sur structure d'arbre
 * @func: pointeur sur fonction avec un int pour argument et ne renvoie rien
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
