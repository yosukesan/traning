
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long n, X;
    long long a[100010];
    double x[100010];
    double delta = 0;
    long long denm = 0;

    cin >> n >> X;

    for (long long i=0; i<n; ++i)
        cin >> a[i];

    for (long long i=0; i<n; ++i)
        denm += a[i];

    for (long long i=0; i<n; ++i)
        x[i] = round(X * (1.0 / denm) * a[i]);

    for (long long i=0; i<n; ++i)
        delta = x[i] - X * (1.0 / denm); 

    if (!(delta >= 1.0))
    {
        /*
        sort(x, x+n, greater<int>());
        x[n-1]++;
        */
    }

    for (long long i=0; i<n; ++i)
        cout << x[i] << endl;

    return 0;
}
