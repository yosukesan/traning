
#include "linked_list.h"

int main()
{
	linked_list_t* list = '\0';
	linked_list_t list_f;
	data_t data;

	// initialise function
	list_f.pre_insert = linked_list_pre_insert;
	list_f.append = linked_list_append;
	list_f.print = linked_list_print;
	list_f.insert_by_order = linked_list_insert_by_order;

	// assign arbitary number
	for (int i=0; i<16; i++)
	{
		data.value = i;
		list_f.pre_insert(&list, data);
	}

	data.value = 144;
	list_f.append(&list, data);

	data.value = 13;
	list_f.insert_by_order(&list, data);

	list_f.print(&list);

	return 0;
}
