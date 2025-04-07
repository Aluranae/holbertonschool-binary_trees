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
	size_t left_height = 0;
	size_t right_height = 0;

	/* Étape 2 : Vérifier si tree est NULL */
	/* Si oui, retourner 0 */
	if (tree == NULL)
		return (0);

	/* Étape 3 : Vérifier si tree->left existe */
	/* Si oui, appel récursif +1 */
	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);

	/* Étape 4 : Vérifier si tree->right existe */
	/* Si oui, appel récursif +1 */
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);

	/* Étape 5 : Comparer les deux hauteurs et retourner la plus grande */
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
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
	int left_height = 0;
	int right_height = 0;
	int balance = 0;

	/* Étape 2 : Vérifier si tree est NULL */
	/* Si oui, retourner 0 */
	if (tree == NULL)
		return (0);

	/* Étape 3 : Vérifier si tree->left existe */
	/* Si oui, appel récursif +1 */
	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);

	/* Étape 4 : Vérifier si tree->right existe */
	/* Si oui, appel récursif +1 */
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);

	/* Étape 5 : Calculer la différence (gauche - droite) */
	balance = left_height - right_height;

	/* Étape 6 : Retourner la différence (gauche - droite) */
	return (balance);
}
