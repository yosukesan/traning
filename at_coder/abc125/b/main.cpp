
#include <iostream>

using namespace std;

int main()
{
    int n;
    int c[50], v[50];
    int sum = 0;
    cin >> n;

    for (int i=0; i<n; ++i)
    {
        cin >> v[i];
    }

    for (int i=0; i<n; ++i)
    {
        cin >> c[i];
    }

    for (int i=0; i<n; ++i)
    {
        if (v[i] - c[i] > 0) sum += v[i] - c[i]; 
    }

    cout << sum << endl;

    return 0;
}
