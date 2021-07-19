#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * ------------------------------
 * Return: balance factor of a binary tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int uwu = 0;

	if (!tree)
		return (0);

	uwu = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (uwu);
}
