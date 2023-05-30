#include "binary_trees.h"
/**
 * binary_tree_node - creates a node
 * @parent: is a pointer to root
 * @value: is integer value to be for the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return NULL;

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent == NULL)
		new_node->parent = NULL;
	else
		new_node->parent = parent;

	return (new_node);
}
