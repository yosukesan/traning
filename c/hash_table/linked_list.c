
#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

void linked_list_insert(struct linked_list** list, const data_t data)
{
	linked_list_t* node = (linked_list_t*)malloc(sizeof(linked_list_t));
	node->data = data;

	if (!*list)
		node->next = NULL;
	else
		node->next = *list;

	*list = node;
}

void linked_list_print(struct linked_list** list)
{
	while (*list)
	{
		printf("%d\n", (*list)->data.value);
		list = &((*list)->next);
	}
}

int linked_list_find(struct linked_list** list, const data_t data)
{
	while (*list)
	{
		/*
		 note: find only the first matched.
		 */
		if ((*list)->data.value == data.value)
		{
			return 1;
		}

		list = &((*list)->next);
	}

	return 0;
}
