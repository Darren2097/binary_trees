#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: returns the height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lh = 0, rh = 0;

		lh = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		rh = tree->right ? binary_tree_height(tree->right) + 1 : 0;
		return ((lh > rh) ? lh : rh);
	}

	return (0);
}
