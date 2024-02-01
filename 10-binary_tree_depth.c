#include "binary_trees.h"
/**
 * binary_tree_depth - function to measure depth
 * @tree - node to find depth of it
 * Return: 1 on success otherwise 0
 * 
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if(tree->parent != NULL){
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
