#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * find_leftmost_leaf_depth - trouve la profondeur de la feuille
 * la plus à gauche
 * @tree: pointeur vers la racine
 *
 * Return: profondeur de la première feuille
 */
size_t find_leftmost_leaf_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->left)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}
/**
 * check_perfect - vérifie récursivement si l'arbre est parfait
 * @tree: nœud courant
 * @depth: profondeur attendue des feuilles
 * @level: profondeur actuelle
 *
 * Return: 1 si parfait, 0 sinon
 */
int check_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	int left_check, right_check;

	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
	{
		if (level == depth)
			return (1);
		else
			return (0);
	}

	if (!tree->left || !tree->right)
		return (0);

	left_check = check_perfect(tree->left, depth, level + 1);
	right_check = check_perfect(tree->right, depth, level + 1);

	if (left_check == 1 && right_check == 1)
		return (1);

	return (0);
}

/**
 * binary_tree_is_perfect - vérifie si un arbre binaire est parfait
 * @tree: pointeur vers la racine
 *
 * Return: 1 si parfait, 0 sinon
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = find_leftmost_leaf_depth(tree);

	return (check_perfect(tree, depth, 0));
}
