
#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int&& a, int&& b)
{
    int tmp;

    if (a > b)
        swap(a, b);

    while (b % a != 0)
    {
        tmp = a;
        a = b % a;
        b = tmp;
        //cout << b << ' ' << a << endl;
    }

    return a;
}

int main()
{
    cout << gcd(24, 14) << endl;
    return 0;
}
