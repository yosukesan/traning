
#include "list.hpp"

int main()
{
	List<int> list;
	list.pre_insert(5);
	list.pre_insert(7);
	list.pre_insert(10);

	list.print();

	return 0;
}
