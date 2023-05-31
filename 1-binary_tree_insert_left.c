#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as
 * the left-child of another node
 *
 * @parent: pointer to the node to insert left
 * child in
 * @value: is value to store in the new node
 * Return: pointer to the created node or NULL on
 * failure or if parent is NULL
 * If parent already has a left child, the new node
 * takes its place, and the old becomes left child of
 * the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_left_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_left_node == NULL)
		return (NULL);

	new_left_node->n = value;
	new_left_node->left = NULL;
	new_left_node->right = NULL;

	if (parent->left == NULL)
	{
		new_left_node->parent = parent;
		parent->left = new_left_node;
	}
	else if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		new_left_node->left->parent = new_left_node;
	}

	new_left_node->parent = parent;
	parent->left = new_left_node;

	return (new_left_node);
}
