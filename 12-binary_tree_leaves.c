#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the leaves in a binary tree
* @tree: Pointer to the root node of the tree to count the number of leaves
*
* Return: Number of leaves in the tree, or 0 if tree is NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Étape 1 : Déclarer deux variables de type size_t pour stocker */
	/* le nombre de feuilles à gauche et à droite */
	size_t left_leaves;
	size_t right_leaves;

	/* Étape 2 : Vérifier si tree est NULL */
	if (tree == NULL)
		return (0);

	/* Étape 3 : Vérifier si le nœud courant est une feuille */
	/* Si oui, retourner 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Étape 4 : Appel récursif sur tree->left pour compter les feuilles */
	/* à gauche */
	left_leaves = binary_tree_leaves(tree->left);

	/* Étape 5 : Appel récursif sur tree->right pour compter les feuilles */
	/* à droite */
	right_leaves = binary_tree_leaves(tree->right);

	/* Étape 6 : Retourner la somme des feuilles gauche + droite */
	return (left_leaves + right_leaves);
}
