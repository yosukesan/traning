
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    int tmp;
    vector<int> l;
    
    cin >> n;
    for (int i=0; i<n; ++i)
    {
        cin >> tmp;
        l.push_back(tmp);
    }

    sort(l.begin(), l.end());  

    int sum = 0;
    for (int i=0; i<n-1; ++i)
    {
       sum += l[i]; 
    }

    //cout << sum << ' ' << l[n-1];

    const string res = (sum > l[n-1]) ? "Yes" : "No";
    cout << res << endl;

    return 0;
}
