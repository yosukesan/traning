
#include "binary_tree.h"

int main()
{
	binary_tree_t* bt;
	binary_tree_t func_bt;
	data_t data;

	func_bt.insert = insert;
	func_bt.print = print;

	data.value = 3;
	func_bt.insert(&bt, data);

	data.value = 5;
	func_bt.insert(&bt, data);

	data.value = -9;
	func_bt.insert(&bt, data);

	data.value = 12;
	func_bt.insert(&bt, data);

	data.value = 5;
	func_bt.insert(&bt, data);

	func_bt.print(&bt);

	return 0;
}
