#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_delete - Deletes an entire binary tree
* @tree: Pointer to the root node of the tree to delete
*
* Description: Uses post-order traversal to delete all nodes.
*              If tree is NULL, do nothing.
*/

void binary_tree_delete(binary_tree_t *tree)
{
	/* Étape 1 : Vérifier si tree est NULL */
	/* Si oui, ne rien faire (return) */
	if (tree == NULL)
	return;

	/* Étape 2 : Appel récursif pour supprimer le sous-arbre gauche */
	/* binary_tree_delete(tree->left); */
	binary_tree_delete(tree->left);

	/* Étape 3 : Appel récursif pour supprimer le sous-arbre droit */
	/* binary_tree_delete(tree->right); */
	binary_tree_delete(tree->right);

	/* Étape 4 : Libérer le nœud courant avec free() */
	free(tree);
}
