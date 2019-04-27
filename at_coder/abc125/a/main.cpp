
#include <iostream>

using namespace std;

int main()
{
    int a, b, t;
    int num = 0;

    cin >> a >> b >> t;

    for (int tt=a; tt<=t; tt+=a)
    {
        num += b;
    }

    cout << num << endl;

    return 0;
}
