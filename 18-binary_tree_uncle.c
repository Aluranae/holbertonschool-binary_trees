#include "binary_trees.h"

/**
* binary_tree_uncle - Trouve l’oncle d’un nœud donné
* @node: Pointeur vers le nœud à analyser
*
* Return: Pointeur vers l’oncle, ou NULL si inexistant
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Étape 1 : Vérifier si node est NULL */
	if (node == NULL)
	return (NULL);

	/* Étape 2 : Vérifier si node n’a pas de parent */
	if (node->parent == NULL)
	return (NULL);

	/* Étape 3 : Vérifier si le parent de node n’a pas de parent */
	if (node->parent->parent == NULL)
	return (NULL);


	/* Étape 4 : Identifier si le parent de node est l’enfant gauche */
	/*          ou droit de son propre parent, et retourner l’autre enfant */
	/*          de son propre parent, et retourner l’autre enfant */
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);



	/* Étape 5 : Aucun oncle trouvé → retourner NULL */
	return (NULL);
}
