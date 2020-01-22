
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main ()
{
    int n;
    string s;
    cin >> n;
   
    vector<int> h(n); 
    for (int i=0; i<n; ++i)
        cin >> h[i];

    vector<int> dp(n+10, 0);

    for (int i=0; i<n; ++i)    
        dp[i+2] = max(dp[i], dp[i]+h[i]);

    cout << dp[n] << endl;

    return 0;
}
