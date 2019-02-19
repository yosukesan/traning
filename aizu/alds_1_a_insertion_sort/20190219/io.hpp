
#pragma once

#include<vector>

template <typename T>
class Data 
{

public:
	T num_items;
	std::vector<T> items;
	void read(Data<T>* data);	
};

template class Data<int>;
