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
* binary_tree_is_perfect - Vérifie si un arbre binaire est parfait
* @tree: Pointeur vers la racine de l’arbre
*
* Return: 1 si l’arbre est parfait, 0 sinon
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* Étape 1 : Déclararation de variables*/
	int left_height = 0;

	int right_height = 0;

	/* Étape 1 : Vérifier si tree est NULL */
	if (tree == NULL)
		return (0);

	/* Étape 2 : Vérifier si le nœud courant est une feuille */
	/* Si oui, retourner 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Étape 3 : Vérifier si l’un des enfants est NULL */
	/* Si un seul est NULL (pas les deux), retourner 0 */
	if (tree->left == NULL || tree->right == NULL)
	return (0);

	/* Étape 4 : Calculer la hauteur des sous-arbres gauche et droit */
	/* Astuce : utiliser binary_tree_height */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Étape 5 : Vérifier si les deux hauteurs sont égales retourner 1 */
	if (left_height == right_height)
	{
		return (
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right)
		);
	}
	/* Étape 6: sinon retourne 0 */
	else
		return (0);
}
