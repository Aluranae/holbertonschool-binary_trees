#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
* @tree: Pointer to the root node of the tree to count the number of nodes
*
* Return: Number of nodes with at least 1 child, or 0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* Étape 1 : Déclarer deux variables pour stocker le nombre de nœuds */
	/* à gauche et à droite */
	size_t left_nodes;
	size_t right_nodes;

	/* Étape 2 : Vérifier si tree est NULL */
	/* Si oui, retourner 0 */
	if (tree == NULL)
		return (0);

	/* Étape 3 : Vérifier si tree a au moins un enfant */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Étape 4: Appel récursif sur le sous-arbre gauche */
	left_nodes = binary_tree_nodes(tree->left);

	/* Étape 5 : Appel récursif sur le sous-arbre droit */
	right_nodes = binary_tree_nodes(tree->right);

	/* Étape 6 : Retourner 1 (pour le nœud courant) + gauche + droite */
	return (1 + left_nodes + right_nodes);
}
