#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert des noeuds à droite
 * @parent: la racine de l'arbre
 * @value: la valeur du noeud
 *
 * Return: (new_node_L) renvoie le noeud créé, (NULL) si adresse vide
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_R;
	binary_tree_t *old_node;

	if (!parent)
		return (NULL);

	new_node_R =  binary_tree_node(parent, value);
	if (!new_node_R)
		return (NULL);

	if (parent && !parent->right)
	{
		parent->right = new_node_R;
		return (new_node_R);
	}
	else if (parent && parent->right)
	{
		old_node = parent->right;
		new_node_R->right = old_node;
		old_node->parent = new_node_R;
		parent->right = new_node_R;

	return (new_node_R);
	}
return (NULL);
}
