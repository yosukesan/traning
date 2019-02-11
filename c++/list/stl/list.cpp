
#include <iostream>

#include "list.hpp"

template<typename T>
List<T>::List() : next(NULL)
{

}

template<typename T>
List<T>::~List()
{

}

template<typename T>
void List<T>::pre_insert(const T& value)
{
	List<T> *tmp = this;

	while (tmp->next)	
	{
		tmp = tmp->next;
	}

	tmp = tmp->next;
	tmp = new List<T>;
	tmp->data = value;
}

template<typename T>
void List<T>::append()
{

}

template<typename T>
void List<T>::print()
{
	List<T> *tmp = this;
	while (tmp->next)
	{
		std::cout << tmp->data << std::endl;
		tmp = tmp->next;
	}
}

//template void List<int>::insert();
