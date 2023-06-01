#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the
 * balance factor
 * Return: balance factor of the tree, if tree is NULL return 0
 */

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int height(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return 1 + max(height(node->left), height(node->right));
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return abs(left_height - right_height);
}
