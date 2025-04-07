#include "binary_trees.h"

/**
* binary_tree_is_full - Vérifie si un arbre binaire est plein
* @tree: Pointeur vers la racine de l’arbre
*
* Return: 1 si l’arbre est plein, 0 sinon
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Étape 1 : Vérifier si tree est NULL */
	if (tree == NULL)
		return (0);

	/* Étape 2 : Vérifier si le nœud est une feuille (aucun enfant) */
	/* Si oui, retourner 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Étape 3 : Vérifier si le nœud a exactement deux enfants */
	/* Si oui, appel récursif à gauche ET à droite */
	if (tree->left != NULL && tree->right != NULL)
	return (
		binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right)
	);

	/* Étape 4 : Retourner 0 par défaut (sécurité) */
	return (0);
}
