
#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

void linked_list_pre_insert(linked_list_t** list, const data_t data)
{
	linked_list_t* tmp;
	tmp = malloc(sizeof(tmp));
	tmp->data = data;

	if (!*list)
		tmp->next = NULL;
	else
		tmp->next = *list; 

	*list = tmp;
}

void linked_list_append(linked_list_t** list, const data_t data)
{
	while ((*list)->next)
	{
		list = &((*list)->next);
	}

	linked_list_t* tmp;
	tmp = malloc(sizeof(tmp));
	tmp->data = data;

	(*list)->next = tmp;
}

void linked_list_insert_by_order(linked_list_t**list, const data_t data)
{
	while ((*list)->next->next && (*list)->data.value < data.value)
	{
		list = &((*list)->next);
	}

	linked_list_t* tmp;
	tmp = malloc(sizeof(tmp));
	tmp->data = data;
	tmp->next = (*list)->next;
	
	(*list)->next = tmp;
}

void linked_list_print(linked_list_t** list)
{
	while(*list)
	{
		printf("%d ", (*list)->data.value);
		list = &((*list)->next);
	}
}
