#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer of root node
 * -----------------------------------
 * Return: checks if a binary tree is perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_len = 0, right_len = 0;

	if (!tree)
		return (0);

	right_len = binary_tree_height(tree->right);
	left_len = binary_tree_height(tree->left);

	if (right_len != left_len)
		return (0);

	return (1);
}
