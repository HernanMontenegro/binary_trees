#include "binary_trees.h"


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *root = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	root = node->parent->parent;

	if (root->left == node->parent)
		return (root->right);
	else if (root->right == node->parent)
		return (root->left);

	return (NULL);
}
