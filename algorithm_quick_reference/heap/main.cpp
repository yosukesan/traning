
// https://www.geeksforgeeks.org/binary-heap/

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

class MinHeap
{
    int *harr;
    int capacity;
    int heap_size;
public:
    
    explicit MinHeap(const int& capacity);
    virtual~MinHeap();
   
    int extractMin(); 
    int parent(const int& i){return (i-1)/2;}
    int left(const int& i){return 2*(i)+1;}
    int right(const int& i){return 2*(i)+2;}

    void decreaseKey(int i, int new_val);
    int getMin(){return harr[0];}
    void deleteKey(int i);
    void insertKey(int k);
    void MinHeapify(int i);
     
};

void MinHeap::insertKey(int k)
{
    if (heap_size == this->capacity)
    {
        cout << "Overflow: Cloud not insertKey" << endl;
        return;
    }

    heap_size++;
    int i = heap_size - 1;
    harr[i] = k;

    while (i != 0 && harr[parent(i)] > harr[i])
    {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}


void MinHeap::decreaseKey(int i, int new_val)
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i])
    {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}

int MinHeap::extractMin()
{
    if (heap_size <= 0)
        return INT_MAX;

    if (heap_size == 1)
    {
        heap_size--;
        return harr[0];
    }

    int root = harr[0];
    harr[0] = harr[heap_size - 1];
    heap_size--;
    MinHeapify(0);

    return root;
}

void MinHeap::deleteKey(int i)
{
    decreaseKey(i, INT_MIN);
    extractMin();
}

void MinHeap::MinHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;

    if (l < heap_size && harr[l] < harr[i])
            smallest = l;

    if (r < heap_size && harr[r] < harr[smallest])
            smallest = r;

    if (smallest != i)
    {
        swap(harr[i], harr[smallest]);
        MinHeapify(smallest);
    }
}

MinHeap::MinHeap(const int& capacity)
: capacity(capacity), heap_size(0)
{
    this->harr = new int [this->capacity];
}

MinHeap::~MinHeap()
{
    delete [] this->harr;
}


int main()
{
    MinHeap heap(11);

    heap.insertKey(3); 
    heap.insertKey(2); 
    heap.deleteKey(1); 
    heap.insertKey(15); 
    heap.insertKey(5); 
    heap.insertKey(4); 
    heap.insertKey(45); 
    cout << heap.extractMin() << " "; 
    cout << heap.getMin() << " "; 
    heap.decreaseKey(2, 1); 
    cout << heap.getMin();
    
    return 0;
}
