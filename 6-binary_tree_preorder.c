#include "binary_trees.h"
/**
 * binary_tree_preorder-preorder function
 * @tree-node to be traversed
 * @func - function to be called on the tree
 * Return: 1 on succees otherwise 0
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)) {

    if (tree == NULL || func == NULL) {
        return;  
    }

    func(tree->n);

    binary_tree_preorder(tree->left, func);

    binary_tree_preorder(tree->right, func);
}
