#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the root node of the tree to measure the size
 * ------------------------------------
 * Return: the size in POV of the node given
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size++;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
