#include "binary_trees.h"
/**
 * binary_tree_insert_right- insert node to right of parent node
 * @parent-  pointer to the node to insert right child
 * @value- data to be inserted
 * Return: pointer to new node otherwise NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value){

	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if(parent == NULL)
		return (NULL);

	if(!newnode)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->right = parent->right;
	newnode->left = NULL;

	if(parent->right != NULL)
		parent->right->parent = newnode;

	return (newnode);
}
