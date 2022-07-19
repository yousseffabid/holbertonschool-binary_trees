#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: start point
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
