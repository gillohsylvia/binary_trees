#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

		size_t l_Height = 0, r_Height = 0;

		l_Height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_Height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		if (l_Height >= r_Height)
			return (l_Height);
		else
			return (r_Height);
}

