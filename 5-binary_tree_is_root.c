#include "binary_trees.h"

/**
* binary_tree_is_root - Checks if a node is the root of a binary tree
* @node: Pointer to the node to check
*
* Return: 1 if node is the root, 0 otherwise or if node is NULL
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	/* Étape 1 : Vérifier si node est NULL */
	/* Si oui, retourner 0 */
	if (node == NULL)
		return (0);

	/* Étape 2 : Vérifier si node->parent est NULL */
	/* Si oui, retourner 1 */
	if (node->parent == NULL)
		return (1);

	/* Étape 3 : Sinon, retourner 0 */
	return (0);
}
