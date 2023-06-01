#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as
 * the right-child of another node
 *
 * @parent: pointer to the node to insert right
 * child in
 * @value: is value to store in the new node
 * Return: pointer to the created node or NULL on
 * failure or if parent is NULL
 * If parent already has a right child, the new node
 * takes its place, and the old becomes right child of
 * the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_right_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_right_node == NULL)
		return (NULL);

	new_right_node->n = value;
	new_right_node->parent = parent;
	new_right_node->left = NULL;
	new_right_node->right = parent->right;
	parent->right = new_right_node;

	if (new_right_node->right)
		new_right_node->right->parent = new_right_node;

	return (new_right_node);
}
