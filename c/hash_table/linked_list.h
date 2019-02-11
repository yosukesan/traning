
#pragma once

#include "data.h"

typedef struct linked_list
{
	data_t data;	
	struct linked_list* next;

	void (*insert)(struct linked_list** list, const data_t data);
	int (*find)(struct linked_list** list, const data_t data);
	void (*print)(struct linked_list** list);
} linked_list_t;

void linked_list_insert(struct linked_list** list, const data_t data);
int linked_list_find(struct linked_list** list, const data_t data);
void linked_list_print(struct linked_list** list);
