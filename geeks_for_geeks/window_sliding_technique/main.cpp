
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;

    if (k > n)
    {
        cout << "Invalid" << endl;
        return 0;
    }

    vector<int> a(n);
    for (int i=0; i<n; ++i)
        cin >> a[i];

    vector<int> accm(n+1, 0);
    for (int i=0; i<n; ++i)
        accm[i+1] = a[i] + accm[i];

    int _max(0);
    for (int i=0; i<=n-k; ++i)
    {
        _max = max(_max, accm[i+k]-accm[i]);
    }

    cout << _max << endl;

    return 0;
}
