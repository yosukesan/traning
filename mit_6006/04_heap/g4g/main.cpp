
// https://www.geeksforgeeks.org/binary-heap/

#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

template<typename T>
void swap(T* a, T* b);

template<typename T>
class MinHeap
{
    std::vector<T> harr; 
    size_t heap_size;
public:
    MinHeap(const size_t& capacity)
    {
        harr.resize(capacity);
        heap_size = 0;
    }

    T min(){return harr[0];}

    size_t parent(const size_t& i)
    {
        return (i-1)/2;
    }

    size_t right (const size_t& i)
    {
        return (2*i+1);
    }

    size_t left (const size_t& i)
    {
        return (2*i+2);
    }

    void print ()
    {
        for (auto i: harr)
            std::cout << " " << i;
        std::cout << std::endl;
    }

    void insert(const T& val)
    {
        if (harr.size() <= heap_size) 
        {
            std::cerr << "Error: heap size exceeded" << std::endl;
            return;
        }
        
        harr[heap_size++] = val;  

        size_t i (heap_size-1);
        while (i != 0 && harr[parent(i)] > harr[i])    
        {
            //swap<T>(&harr[i], &harr[parent(i)]);
            std::swap(harr[i], harr[parent(i)]);
            i = parent(i);
        }

    }

    T ExtractMin()
    {
        if (heap_size <= 0)
            return INT_MAX;; 

        if (heap_size == 1)
        {
            --heap_size;
            return harr[0];
        }

        T root = harr[0];
        harr[0] = harr[--heap_size];
        MinHeapify(0);
        return root;
    }

    void MinHeapify(size_t i)
    {
        size_t l = left(i);
        size_t r = right(i);
        size_t smallest = i;

        if (l < heap_size && harr[l] < harr[r])
            smallest = l; 
        if (r < heap_size && harr[r] < harr[smallest])
            smallest = r; 
        if (smallest != i)
        {
            //swap(&harr[i], &harr[smallest]);
            std::swap(harr[i], harr[smallest]);
            MinHeapify(smallest);
        }
    }
};

template <typename T>
void swap(T* a, T* b)
{
    T *tmp = a;
    a = b;
    b = tmp;
}

int main ()
{
    MinHeap<int> h(11);
    h.insert(5); 
    h.insert(3); 
    h.insert(7); 
    h.insert(2); 

    h.print();

    std::cout << h.min() << std::endl;

    return 0;
}
