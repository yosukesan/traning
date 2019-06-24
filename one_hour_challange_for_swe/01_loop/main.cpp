
#include <iostream>
#include <list>
#include <numeric>

using namespace std;

template <typename T>
void print(list<T>& l)
{
    if (0 == l.size())
        return;

    cout << *(l.begin()) << ' ';
    l.pop_front();

    print(l);
}


int main()
{
    const int num = 10;
    list<int> l(num); 
    iota(l.begin(), l.end(), 0);

    for (auto i: l)
        cout << i << ' ';

    cout << endl;

    list<int> tmp (l);
    while (0 != l.size())
    {
        cout << *(l.begin()) << ' ';
        l.pop_front();
    }

    cout << endl;

    print<int>(tmp);
    cout << endl;

    return 0;
}
