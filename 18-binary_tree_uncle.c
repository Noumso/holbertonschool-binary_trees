#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the sibling of a node
 *
 * @node: node to begin from
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (NULL);
}
