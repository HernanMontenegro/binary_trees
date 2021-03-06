#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the given node
 * --------------------------------
 * Return: the sibling of the node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	else if (node->parent->left == node)
		return (node->parent->right);

	return (NULL);
}
