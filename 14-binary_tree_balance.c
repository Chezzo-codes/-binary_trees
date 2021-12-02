#include "binary_trees.h"

/**
 * binary_tree_height_1 - gets hieght of the tree
 * @tree:pointer to root node of the tree
 * Return: 0 if tree is NULL else the hight
 */
int binary_tree_height_1(const binary_tree_t *tree)
{
	int n_left, n_right;

	if (tree == NULL)
		return (0);
	n_left = binary_tree_height_1(tree->left);
	n_right = binary_tree_height_1(tree->right);
	if (n_left >=  n_right)
		return (n_left + 1);

	return (n_right + 1);

}
/**
 * binary_tree_balance - checks balance factor of a binary tree
 * @tree: pointer to the root node to measure the balance factor
 * Return: 0 or balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height_1(tree->left);
	right = binary_tree_height_1(tree->right);
	return (left - right);
}
