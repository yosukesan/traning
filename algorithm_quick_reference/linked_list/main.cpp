
#include <iostream>

class List
{
    int data;
    List* next;  

public:
    explicit List();
    virtual ~List();
    void push_back(List** list, const int& value);
}

void List::push_back(List** list, const int& value)
{
}


int main()
{
    List list;
    List f;

    f.push_back(&list, 5);

    return 0;
}
