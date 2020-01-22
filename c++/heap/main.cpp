
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void insert(vector<T>* heap, const T val)
{
   heap.push_back(val); 

   for (auto i: heap)
        cout << i << endl;
}

int main()
{
    vector<int> heap();

    for (int i=0; i<5; i++)
        insert(&heap, i);

    insert(&heap, -9);
    insert(&heap, -90);

    return 0;
}
