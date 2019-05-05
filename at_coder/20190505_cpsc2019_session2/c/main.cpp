
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long n, k;
    char s[100000];
    long long p[100000] = {0};
    cin >> n >> k;

    for (long long i=0; i<n; i++) 
        cin >> s[i];

    //for (long long i=0; i<n; i++) 
    //    cout << s[i] << endl;

    for (long long i=0; i<n; i++) 
    {
        if (s[i] == '(')
            p[i+1] = p[i] + 1; 
        else if (s[i] == ')')
            p[i+1] = p[i] - 1; 
    }

    sort(p, p+n, greater<long long>());   

    //for (long long i=0; i<n; i++) 
    //   cout << p[i] << endl;

   
    long long sum = 0; 
    for(long long i=0; i<k; ++i)    
        sum += p[i];

    cout << sum << endl;

    return 0;
}
