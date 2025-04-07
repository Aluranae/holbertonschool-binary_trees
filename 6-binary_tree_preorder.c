#include "binary_trees.h"

/**
* binary_tree_preorder - Goes through a binary tree using pre-order traversal
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function to call for each node’s value
*
* Description: Applies func to each node’s value in pre-order.
*              If tree or func is NULL, do nothing.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Étape 1 : Vérifier si tree ou func est NULL */
	/* Si oui, ne rien faire et return */
	if (tree == NULL || func == NULL)
	return;

	/* Étape 2 : Appeler func sur la valeur du nœud courant */
	func(tree->n);

	/* Étape 3 : Appel récursif sur le sous-arbre gauche */
	binary_tree_preorder(tree->left, func);

	/* Étape 4 : Appel récursif sur le sous-arbre droit */
	binary_tree_preorder(tree->right, func);
}
