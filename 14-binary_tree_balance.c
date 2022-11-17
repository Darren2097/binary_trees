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

		lh = tree->left ? binary_tree_height(tree->left) + 1 : 1;
		rh = tree->right ? binary_tree_height(tree->right) + 1 : 1;
		return ((lh > rh) ? lh : rh);
	}

	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: returns the balnce factor of tree else 0, if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
