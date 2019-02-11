
#include <stdio.h>

#include "linked_list.h"

int main()
{
	data_t data;

	linked_list_t f_list;
	linked_list_t* list = NULL;

	f_list.insert = linked_list_insert;

	data.value = 4;
	f_list.insert(&list, data);	
	data.value = 3;
	f_list.insert(&list, data);	
	data.value = 2;
	f_list.insert(&list, data);	

	/*
	printf("%d\n", list->data.value);
	printf("%d\n", list->next->data.value);
	printf("%d\n", list->next->next->data.value);
	*/
	
	f_list.print = linked_list_print;
	f_list.print(&list);

	f_list.find = linked_list_find;
	data.value = 4;
	printf("%d\n", f_list.find(&list, data));
	data.value = 8;
	printf("%d\n", f_list.find(&list, data));

	return 0;
}
