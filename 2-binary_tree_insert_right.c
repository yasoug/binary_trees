#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (!parent)
		return (NULL);

	right_child = binary_tree_node(parent, value);
	if (!right_child)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = right_child;
		right_child->right = parent->right;
	}
	parent->right = right_child;
	return (right_child);
}
