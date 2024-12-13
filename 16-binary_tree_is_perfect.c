#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: root of the binary tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	int left_perfect, right_perfect;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);

	return (left_perfect && right_perfect);
}

/**
 * max - returns the max value between two numbers
 *
 * @a: value 1
 * @b: value 2
 * Return: max value
 */
size_t max(size_t a, size_t b)
{
	return (a > b ? a : b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: root of the binary tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (max(height_left, height_right));
}

