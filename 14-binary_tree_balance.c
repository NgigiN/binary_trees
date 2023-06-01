#include "binary_trees.h"

/**
 * max  - finds the max of two numbers
 * @a: is the first number
 * @b: is the second number
 * Return: the larger number
 */

int max(int a, int b)
{
	return ((a > b) ? a : b);
}
/**
 * height - finds the height of the tree
 * @node: is a pointer to the root of the tree
 * Return: height of the tree
 */

int height(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (1 + max(height(node->left), height(node->right)));
}

/**
 * binary_tree_balance - checks if a binary tree is balanced
 * @tree: is node to the root node of the tree
 * Return: 1 if balanced, 0 if unbalanced or NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (abs(left_height - right_height));
}
