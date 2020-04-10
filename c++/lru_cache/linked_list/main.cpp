
#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <typename T>
class LRUCache
{
    size_t _size;
    list<T> _data;
public:
    LRUCache (){}

    LRUCache (const size_t& size)
    : _size(size)
    {
    }

    void push(const T& data)
    {
        if (_data.size() >= _size)
            _data.erase(--_data.end());
        
        _data.push_front(data);
    }

    void print()
    {
        for (auto i: _data)
            cout << " " << i;
        cout << endl;
    }

    T top()
    {
        return _data.front();
    }

    void pop()
    {
        if (!_data.empty())
            _data.erase(_data.begin());
    }
};

int main ()
{
    LRUCache<int> cache(4);
    cache.push(1);
    cache.push(2);
    cache.push(3);
    cache.push(1);
    cache.push(4);
    cache.push(5);
    cache.print();

    return 0;
}

//int main ()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//
//    for (int i=0; i<n; ++i)
//        cin >> a[i];
//
//    LRUCache <int> cache(3);
//
//    for (int i=0; i<a.size(); ++i)
//    {
//        cache.push(a[i]);
//        cache.print();
//        if (i==4 || i==7 || i==9)
//            cache.pop();
//    }
//
//    return 0;
//}
