
// open data structure

#include <vector>
#include <iostream>
#include <cstdint>

using namespace std;

template <typename T>
class Heap
{
    vector<T> _heap; 
    uint64_t _head;

    void bubbleUp(uint64_t i)
    {
        int p = parent(i);
        while (i>0 && _heap[i] < _heap[p])
        {
            swap(_heap[i], _heap[p]);
            i = p, p = parent(i);
        }
    }

    void trickleDown(int i)
    {
        do
        {
            uint64_t j (-1);
            uint64_t r (right(i));

            if (r < _head && _heap[r] < _heap[i])
            {
                uint64_t l (left(i));
       
                if (_heap[l] < _heap[r]) 
                    j = l;
                else
                    j = r;
            }
            else
            {
                uint64_t l (left(i));
                if (l < _head && _heap[l] < _heap[i])
                    j = l;
            }
            if (j >= 0) swap(_heap[i], _heap[j]);
            i = j;
        } while (i >= 0);
    }

    inline uint64_t left (const int& i) const
    {
        return 2*i+1;
    }
    
    inline uint64_t right (const int& i) const
    {
        return 2*i+2;
    }
    
    inline uint64_t parent (const int& i) const
    {
        return (i-1)/2;
    }

public:
    Heap(): _head(0){ _heap.resize(64); }
    ~Heap(){}

    // amortise O(n)
    bool add(T val)
    {
        if (_head+1 > _heap.size()) _heap.resize(2*_heap.size());
        _heap[_head++] = val;
        bubbleUp(_head-1);

        return true;
    }

    void remove ()
    {
        _heap[0] = _heap[--_head];
        trickleDown(0);
        if (3*_head < _heap.size()) _heap.resize(_head);
    }

    vector<T> get()
    {
        return _heap;
    }

    uint64_t size() const
    {
        return _head;
    }
};

int main()
{
    Heap<int> heap;

    heap.add(4);
    heap.add(9);
    heap.add(8);
    heap.add(17);
    heap.add(26);
    heap.add(50);
    heap.add(16);
    heap.add(19);
    heap.add(69);
    heap.add(32);
    heap.add(93);
    heap.add(55);
    heap.add(6);

    auto v = heap.get();

    for (uint64_t i=0; i<heap.size(); i++)
    {
        cout << v[i] << endl;
    }

    heap.remove();

    return 0;
}
