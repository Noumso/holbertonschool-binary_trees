#include "binary_trees.h"
/**
 * binary_tree_is_full - measures if binary tree is full
 *
 * @tree: root of binary tree
 * Return: if left height - right height % 2 == 0 return 1 otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
						binary_tree_height(tree->right) % 2 ==
					0
				? 1
				: 0);
}

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

	heightLeft = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	heightRight = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return (max(heightLeft, heightRight));
}
