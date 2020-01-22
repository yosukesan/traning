
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> a(10010);
    vector<int> dp(10010);

    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];

    dp[0] = 0;
    for (int i=0; i<n; i++)
        dp[i+1] = max(dp[i], dp[i] + a[i]);

    cout << dp[n] << endl;

    return 0;
}

