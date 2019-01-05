
#include <stdlib.h>
#include <stdio.h>

#include "binary_tree.h"

void insert(struct binary_tree** tree, const data_t data)
{
	if (! *tree)		
	{
		*tree = malloc(sizeof(tree)); 
		(*tree)->data = data;
	}
	else
	{	
		if ((*tree)->data.value > data.value)
			insert(&((*tree)->right), data);
		else
			insert(&((*tree)->left), data);
	}
}

void print(struct binary_tree** tree)
{
	if (*tree)
	{
		if ((*tree)->left)
			print(&((*tree)->left));

		printf("%d ", (*tree)->data.value);

		if ((*tree)->right)
			print(&((*tree)->right));
	}
}
