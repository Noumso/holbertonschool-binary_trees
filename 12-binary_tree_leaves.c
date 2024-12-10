#include "binary_trees.h"
/**
 * binary_tree_leaves - measures the leaves of a binary tree
 *
 * @tree: root of binary tree
 * Return: height
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	leaves += (!tree->left && !tree->right ? 1 : 0);
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
