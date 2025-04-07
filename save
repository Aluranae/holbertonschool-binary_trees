#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: Height of the tree, or 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	/* Étape 1 : Déclarer deux variables de type size_t pour stocker */
	/* la hauteur du sous-arbre gauche et la hauteur du sous-arbre droit */
	size_t left_height, right_height;

	/* Étape 2 : Vérifier si tree est NULL */
	/* Si oui, retourner 0 */
	if (tree == NULL)
		return (0);

	/* Étape 3 : Vérifier si le nœud est une feuille */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Étape 4 : Appel récursif sur tree->left */
	/* pour calculer la hauteur gauche */
	left_height = binary_tree_height(tree->left);

	/* Étape 5 : Appel récursif sur tree->right */
	/* pour calculer la hauteur droite */
	right_height = binary_tree_height(tree->right);

	/* Étape 6 : Comparer les deux hauteurs */
	/* Retourner 1 + la plus grande des deux */
	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree node
* @tree: Pointer to the root node to measure the balance factor
*
* Return: Balance factor (left height - right height), or 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	/* Étape 1 : Déclarer deux variables size_t pour stocker les hauteurs */
	/* du sous-arbre gauche et du sous-arbre droit */
	int left_height;

	int right_height;

	int balance = 0;

	/* Étape 2 : Vérifier si tree est NULL */
	/* Si oui, retourner 0 */
	if (tree == NULL)
		return (0);

	/* Étape 3 : Calculer la hauteur de tree->left via binary_tree_height() */
	left_height = binary_tree_height(tree->left);

	/* Étape 4 : Calculer la hauteur de tree->right via binary_tree_height() */
	right_height = binary_tree_height(tree->right);

	/* Étape 5 : Calculer la différence (gauche - droite) */
	balance = left_height - right_height;

	/* et la retourner en tant que int */
	return (balance);
}
