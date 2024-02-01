#include "binary_trees.h"
/**
 * binary_tree_is_leaf- function to check whether it is leaf or not
 * @node - node to be checked
 * Return: if it is leaf 1 otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node){

	if (node == NULL)
		return (0);

	if((node->left == NULL) && (node->right == NULL)
			return (1);
	
	return (0);

}
