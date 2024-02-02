#include "binary_trees.h"
/**
 * binary_tree_inorder -inorder function
 * @tree: node to be traversed
 * @func: function to be called on the tree
 * Return: 1 on succees otherwise 0
 */


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
