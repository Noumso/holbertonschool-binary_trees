#include "binary_trees.h"
/**
 * binary_tree_node - measures the node of a binary tree
 *
 * @tree: root of binary tree
 * Return: height
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	nodes += (tree->left || tree->right ? 1 : 0);
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
