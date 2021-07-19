#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: the tree node
 * --------------------------
 * Return: depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t i = 0;
    binary_tree_t *cur = (binary_tree_t *)tree;

    if (!tree)
        return (0);

    while (cur->parent)
    {
        cur = cur->parent;
        i++;
    }

    return i;
}
