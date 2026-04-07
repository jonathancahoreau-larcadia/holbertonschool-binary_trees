#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert des noeuds à gauche
 * @parent: la racine de l'arbre
 * @value: la valeur du noeud
 *
 * Return: (new_node_L) renvoie le noeud créé, (NULL) si adresse vide
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_L;
	binary_tree_t *old_node;

	if (!parent)
		return (NULL);

	new_node_L = binary_tree_node(parent, value);
	if (!new_node_L)
		return (NULL);

	if (parent && !parent->left)
	{
		parent->left = new_node_L;
		return (new_node_L);
	}
	else if (parent && parent->left)
	{
		old_node = parent->left;
		new_node_L->left = old_node;
		old_node->parent = new_node_L;
		parent->left = new_node_L;

		return (new_node_L);
	}
return (NULL);
}
