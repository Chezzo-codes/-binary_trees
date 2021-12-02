#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check node is leaf
 * @node: node to check
 * Return: 1 if node if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_nodes - count nodes with at least 1 child in a binary tree
 * @tree: node
 * Return: num of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_left, n_right;

	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
		return (0);

	n_left = binary_tree_nodes(tree->left);
	n_right = binary_tree_nodes(tree->right);

	return (n_right + n_left + 1);
}
