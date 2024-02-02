#include "binary_trees.h"
/**
 * binary_tree_is_root-function name to check root node
 * @node: node to be checked
 * Return: 1 on success otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
