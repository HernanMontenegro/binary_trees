#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the root pointer
 * -------------------------------
 * Return: 1 if is full, 0 if not
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int boolean = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && tree->right)
		boolean = binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right);

	return (boolean);
}
