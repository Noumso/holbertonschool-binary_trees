#include "binary_trees.h"
/**
 * max - returns the max value
 *
 * @a: val 1
 * @b: val 2
 * Return: max value
 */
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	else
		return (b);

	return (a);
}
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: root of binary tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightLeft = 0, heightRight = 0;

	if (tree == NULL)
		return (0);

	heightLeft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	heightRight = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (max(heightLeft, heightRight));
}
