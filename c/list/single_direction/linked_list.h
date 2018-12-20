
#pragma once

#include "data.h"

typedef struct linked_list
{
	data_t data;	
	struct linked_list* next;
	void (*pre_insert)(struct linked_list** list, const data_t data);
	void (*append)(struct linked_list** list, const data_t data);
	void (*insert_by_order)(struct linked_list** list, const data_t data);
	void (*print)(struct linked_list** list);
} linked_list_t;

void linked_list_pre_insert(linked_list_t** list, const data_t data);
void linked_list_append(linked_list_t** list, const data_t data);
void linked_list_insert_by_order(linked_list_t** list, const data_t);
void linked_list_print(linked_list_t** list);
