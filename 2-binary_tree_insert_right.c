#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_insert_right - Inserts a node as the right-child of another node
* @parent: Pointer to the node to insert the right-child in
* @value: Value to store in the new node
*
* Return: Pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* Étape 1 : Déclarer un pointeur vers le nouveau nœud */
	binary_tree_t *new_node;

	/* Étape 2 : Vérifier si parent est NULL */
	if (parent == NULL)
		return (NULL);

	/* Étape 3 : Allouer de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(binary_tree_t));

	/* Étape 4 : Vérifier si malloc a échoué */
	/* Si oui, retourner NULL */
	if (new_node == NULL)
		return (NULL);

	/* Étape 5 : Initialiser les champs du nouveau nœud */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Étape 6 : Vérifier si parent->right existe déjà */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/* Étape 7 : Rattacher le nouveau nœud au parent */
	/* (parent->right = new_node) */
	parent->right = new_node;

	/* Étape 8 : Retourner le pointeur vers le nouveau nœud */
	return (new_node);
}
