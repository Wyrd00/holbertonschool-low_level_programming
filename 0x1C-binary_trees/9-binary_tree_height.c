#include "binary_trees.h"

/**
 * binary_tree_postorder - go through bt via postorder traverse method
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter;
	counter = 0;

	if (tree)
	{
		while (tree->left || tree->right)
		{
			counter++;
			if (tree->left)
				tree = tree->left;
			else
				tree = tree->right;
		}
	}
	return (counter);
}
