
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;

    for (int i=0; ; i++)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        if (a > b)
            swap(a, b);

        cout << a << ' ' << b << endl;
    }

    return 0;
}
