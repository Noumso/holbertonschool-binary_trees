#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: parent node
 * @value: data
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	if (parent->left)
	{
		tmp = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = tmp;
		tmp->parent = parent->left;
	}
	else
		parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
