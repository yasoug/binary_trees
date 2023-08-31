#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->left && !node->right)
			return (1);
	}
	return (0);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	height_left = binary_tree_height(tree->left) + 1;
	height_right = binary_tree_height(tree->right) + 1;

	if (height_left >= height_right)
		return (height_left);
	return (height_right);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if a tree is perfect, or 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t	left = 0, right = 0;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (tree->left && tree->right)
	{
		if (left != right)
			return (0);
	}
	if (left == 0 || right == 0)
		return (0);

	return (1);
}
