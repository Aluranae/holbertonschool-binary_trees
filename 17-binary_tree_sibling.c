#include "binary_trees.h"

/**
* binary_tree_sibling - Retourne le frère d’un nœud donné
* @node: Pointeur vers le nœud dont on veut trouver le frère
*
* Return: Pointeur vers le nœud frère, ou NULL si aucun frère
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Étape 1 : Vérifier si node est NULL */
	/* Si oui, retourner NULL */
	if (node == NULL)
	return (NULL);

	/* Étape 2 : Vérifier si node->parent est NULL */
	/* Si oui, retourner NULL */
	if (node->parent == NULL)
	return (NULL);

	/* Étape 3 : Vérifier si node est l’enfant gauche du parent */
	/* Si oui, retourner l’enfant droit du parent */
	if (node->parent->left == node)
	return (node->parent->right);


	/* Étape 4 : Vérifier si node est l’enfant droit du parent */
	/* Si oui, retourner l’enfant gauche du parent */
	if (node->parent->right == node)
	return (node->parent->left);


	/* Étape 5 : Aucun frère trouvé, retourner NULL */
	return (NULL);
}
