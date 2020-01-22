
#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n), s(n+1,0);
    for(auto &i: a)
        cin >> i;

    for (int i=0; i<a.size(); i++)
        s[i+1] = s[i] + a[i];

    //for (int i=0; i<a.size(); i++)
    //    cout << ' ' << a[i];
    //cout << endl;

    //for (int i=0; i<s.size(); i++)
    //    cout << ' ' << s[i];
    //cout << endl;

    //cout << s[n] << endl;
    //cout << s[n-k] << endl;

    int ans (1<<30);
    ans=-ans;
    for (int i=0; i<n-k; i++)
    {
        int tmp (s[k+i] - s[i]);
        if (tmp>ans) ans = tmp;
    }
   
    cout << ans <<endl; 

    return 0;
}
