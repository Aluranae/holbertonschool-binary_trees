#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a binary tree
* @tree: Pointer to the root node of the tree to measure the size
*
* Return: Size of the tree (number of nodes), or 0 if tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Étape 1 : Déclarer deux variables pour stocker */
	/* la taille du sous-arbre gauche et du sous-arbre droit */
	size_t left_size, right_size;

	/* Étape 2 : Vérifier si tree est NULL */
	/* Si oui, retourner 0 */
	if (tree == NULL)
		return (0);

	/* Étape 3 : Appel récursif pour calculer la taille du sous-arbre gauche */
	left_size = binary_tree_size(tree->left);

	/* Étape 4 : Appel récursif pour calculer la taille du sous-arbre droit */
	right_size = binary_tree_size(tree->right);

	/* Étape 5 : Retourner la somme : 1 (nœud courant) + gauche + droite */
	return (1 + left_size + right_size);
}
