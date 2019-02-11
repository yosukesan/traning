
#pragma once

template <typename T>
class List
{
	T data;	
	List* next = '\0';
public:
	List();
	~List();

	void pre_insert(const T& value);
	void append();
	void print();
};

#ifdef __BY_CLASS__
template class List<int>;
#endif
