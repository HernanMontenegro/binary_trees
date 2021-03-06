#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the tree node
 * ----------------------------
 * Return: the height depending of POV of the node
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}
