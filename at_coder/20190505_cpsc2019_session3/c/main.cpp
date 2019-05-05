
#include <iostream>

using namespace std;

int main()
{
    long long n;
    long long s[1000010], t[1000000];
    long long st[1000010] = {0};

    cin >> n;

    for (long long i=0; i<n; i++)
    {
        cin >> s[i] >> t[i];
    }

    for (long long i=0; i<n; i++)
    {
        ++st[s[i]]; 
        --st[t[i]+1]; 
    }

    for (long long i=1; i<=1000000; i++)
    {
        st[i] += st[i-1];
    }

    long long c = 0;
    for (long long i=0; i<1000000; i++)
    {
        if (st[i] == 0 && st[i+1] >0 )
            c++;
    }

    cout << c << endl;
    return 0;
}
