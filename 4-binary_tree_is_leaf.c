#include "binary_trees.h"

/**
* binary_tree_is_leaf - Checks if a node is a leaf
* @node: Pointer to the node to check
*
* Return: 1 if node is a leaf, 0 otherwise or if node is NULL
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Étape 1 : Vérifier si node est NULL */
	/* Si oui, retourner 0 */
	if (node == NULL)
		return (0);

	/* Étape 2 : Vérifier si node->left est NULL */
	/* et si node->right est NULL */
	if (node->left == NULL && node->right == NULL)
		return (1);

	/* Étape 3 : Si les deux sont NULL, retourner 1 */
	/* Sinon, retourner 0 */
	return (0);
}
