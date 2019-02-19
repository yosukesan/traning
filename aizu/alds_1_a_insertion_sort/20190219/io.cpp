
#include "io.hpp"

#include <iostream>
#include <fstream>

template<typename T>
void Data<T>::read(Data<T>* data)
{
	std::ifstream ifs("data.txt");

	ifs >> data->num_items;
	//std::cout << data->num_items << std::endl;

	int tmp;
	for (int i=0; i<data->num_items; ++i)
	{
		ifs >> tmp;
		data->items.push_back(tmp);
		std::cout << data->items[i] << ' ';
	}
	std::cout << std::endl;

	ifs.close();
}
