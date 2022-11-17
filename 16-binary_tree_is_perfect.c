#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		size_t l_size = 0, r_size(tree->left) : 0;
		r-size =tree->right ? binary_tree_size(tree->right) :0;
		l_size = tree->left ? 
