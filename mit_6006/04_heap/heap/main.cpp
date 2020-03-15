
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int pos;

int parent (const int& i)
{
    return (i-1)/2;
}

int right (const int& i)
{
    return (i*2+1);
}

int left (const int& i)
{
    return (i*2+2);
}

void insert(vector<int> & arr, int val)
{
    arr[pos] = val; 
    pos++;

    int i = pos-1;

    while (i!=0 && arr[parent(i)] > arr[i]) 
    {
        swap(arr[i], arr[parent(i)]);
        i = parent(i);
    }
}

int main ()
{
    int n = 10;
    vector<int> arr(n);

    pos = 0;
    insert(arr, 8);
    insert(arr, 1);
    insert(arr, 9);

    for (auto i: arr)
        std::cout << " " << i;
    std::cout << std::endl;
    
    return 0;
}
