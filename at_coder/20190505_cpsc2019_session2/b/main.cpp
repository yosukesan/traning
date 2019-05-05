
#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    int a[1000];
    char c[1000];

    cin >> n;

    for (int i=0; i<n; ++i)
    {
        cin >> c[i] >> a[i]; 
    }

    /*
    for (int i=0; i<n; ++i)
    {
        cout << c[i] << a[i] << endl; 
    }
    */

    sum = 0;
    for (int i=0; i<n; ++i)
    {
        if (c[i] == '+')
            sum += a[i];
    }

    for (int i=0; i<n; ++i)
    {
        if (c[i] == '*' && a[i] != 0)
            sum *= a[i];
    }

    cout << sum << endl; 

    return 0;
}
