
#include<memory>
#include<fstream>
#include<iostream>

#include "io.hpp"

template <typename T>
void insert_sort(Data<T>& data)
{
	T key;
	int j;

	for (int i=1; i<data.num_items; ++i)
	{
		key = data.items[i];
		j = i - 1;
		while (j >= 0 && data.items[j] > key)
		{
			data.items[j+1] = data.items[j];
			--j;
		}
		data.items[j+1] = key;
		
	}	

	print(data);	
}

template<typename T>
void print(Data<T>&data)
{
	for (int i=0; i<data.num_items; ++i)
		std::cout << data.items[i] << std::endl;
}

int main()
{
	Data<int> data;	
	Data<int> f_data;	

	f_data.read(&data);

	insert_sort<int>(data);
}
