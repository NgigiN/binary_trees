#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast 1 child
 * @tree: is a pointer to the root node of the tree to count
 * the nodes
 * Return: the number of nodes, 0 if tree is NULL
 * A NULL pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes;
	size_t right_nodes;
	if (tree == NULL)
	{
		return (0);
	}

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + left_nodes + right_nodes);
	}
	else
	{
		return (left_nodes + right_nodes);
	}
}
