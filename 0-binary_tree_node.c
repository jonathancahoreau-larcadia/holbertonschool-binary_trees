#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - créer un noeud dans un arbre binaire
 * @parent: la racine de l'arbre
 * @value: la valeur du noeud
 *
 * Return: (newnode) renvoie le noeud créé, (NULL) si adresse vide
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
return (newnode);
}
