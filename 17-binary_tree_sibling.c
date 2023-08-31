#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: a pointer to the sibling node, NULL if no sibling
 * or NULL if node or the parent is NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	else if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
