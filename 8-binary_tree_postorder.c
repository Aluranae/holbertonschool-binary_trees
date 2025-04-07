#include "binary_trees.h"

/**
* binary_tree_postorder - Goes through a binary tree
* using post-order traversal
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function to call for each node’s value
*
* Description: Applies func to each node’s value in post-order.
*              If tree or func is NULL, do nothing.
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Étape 1 : Vérifier si tree ou func est NULL */
	/* Si oui, ne rien faire et return */
	if (tree == NULL || func == NULL)
		return;

	/* Étape 2 : Appel récursif sur le sous-arbre gauche */
	binary_tree_postorder(tree->left, func);

	/* Étape 3 : Appel récursif sur le sous-arbre droit */
	binary_tree_postorder(tree->right, func);

	/* Étape 4 : Appeler func sur la valeur du nœud courant */
	func(tree->n);
}
