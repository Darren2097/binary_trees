#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: returns tree depth else 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree != NULL && tree->parent != NULL)
		return (binary_tree_depth(tree->parent) + 1);
	else
		return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if it is perfect tree, else 0 if tree is NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = binary_tree_depth(tree);

	return (is_perfect(tree, depth, 0));
}

/**
 * is_perfect - Checks if tree is perfect
 * @tree: pointer to the root node of the tree to check
 * @depth: depth of tree
 * @level: level on tree
 *
 * Return: 1 if it is perfect tree, else 0 if tree is NULL or not perfect
 */

int is_perfect(const binary_tree_t *tree, size_t depth, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (depth = level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
			is_perfect(tree->right, depth, level + 1));
}
