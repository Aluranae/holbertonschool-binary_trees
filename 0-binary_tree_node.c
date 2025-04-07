#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_node - Creates a new node in a binary tree
* @parent: Pointer to the parent node of the new node
* @value: Value to store in the new node
*
* Return: Pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Allocate memory for new node */
	new_node = /* 🟡 malloc avec cast vers binary_tree_t * */

	/* Check if malloc failed */
	if (new_node == NULL)
		return (NULL);

	/* Initialize the value field */
	/* 🟡 Affecter value à l’attribut n */

	/* Initialize the parent pointer */
	/* 🟡 Affecter parent à l’attribut parent */

	/* Initialize the left and right children */
	/* 🟡 Mettre left et right à NULL */

	return (new_node);
}
