
#include <stack>
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string c;
    vector<string> inst;
    while (cin >> c)
        inst.push_back(c);

    stack<ll> nums;
    for (auto p : inst)
    { 
        //cout << "check=" << p << endl;
        if (p == "*" || p == "+" || p == "-") 
        {
            ll reg1 = nums.top(); nums.pop();
            ll reg2 = nums.top(); nums.pop();
            if (p == "*")
            {
                //cout << reg2 << p << reg1 << endl; 
                nums.push(reg2 * reg1);
            }
            else if (p == "+")
            {
                nums.push(reg2 + reg1);
                //cout << reg2 << p << reg1 << endl; 
            }
            else if (p == "-")
            {
                nums.push(reg2 - reg1);
                //cout << reg2 << p << reg1 << endl; 
            }
        }
        else
            nums.push(atoi(p.c_str())); 
    }

    cout << nums.top() << endl;
    nums.pop();

    return 0;
}
