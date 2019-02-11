
#include <stdio.h>
#include <stdlib.h>

#include "hash.h"

void hash_insert(struct hash** hash_list, const data_t data)
{
	const int index = data.value % HASH_KEY;
	linked_list_t* list;

	if (!*hash_list)
	{
		*hash_list = (hash_t*)malloc(sizeof(hash_list));
	}

	(*hash_list)->f.insert = linked_list_insert;

	list = &((*hash_list)->list[index]);
	(*hash_list)->f.insert(&(list), data);
}

int hash_find(struct hash** hash_list, const data_t data)
{
	const int index = data.value % HASH_KEY;
	
	linked_list_t list_f;
	linked_list_t* list;

	list_f.find = linked_list_find;

	if (*hash_list)
	{
		list = &((*hash_list)->list[index]);
		return list_f.find(&list, data);
	}

	return 0;
}
