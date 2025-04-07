#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a node in a binary tree
* @tree: Pointer to the node to measure the depth
*
* Return: Depth of the node, or 0 if tree is NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* Étape 1 : Déclarer une variable compteur de type size_t */
	size_t count;

	/* Étape 2 : Vérifier si tree est NULL */
	/* Si oui, retourner 0 */
	if (tree == NULL)
		return (0);

	/* Étape 3 : Initialiser le compteur à 0 */
	count = 0;

	/* Étape 4 : Vérifier si tree est la racine (parent == NULL) */
	/* Si oui, retourner 0 */
	while (tree->parent != NULL)
	{
		/* Avancer d’un niveau vers le parent */
		tree = tree->parent;

		/* Incrémenter le compteur */
		count++;
	}

	/* Étape 5 : Retourner la valeur du compteur */
	return (count);
}
