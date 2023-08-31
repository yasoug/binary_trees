#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is full, or 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if (tree->left && tree->right)
			return (left && right);
	}
	return (0);
}
