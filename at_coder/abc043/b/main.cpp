
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <deque>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    string s;
    deque<char> out;

    cin >> s;

    for (char c: s)
    {
        switch (c)
        {
            case '0':
                out.push_back(c); 
                break;
            case '1':
                out.push_back(c); 
                break;
            case 'B':
                if (0 == out.size())
                    continue;

                out.pop_back(); 
                break;
        }
    }

    while (!out.empty())
    {
        cout << out.front();
        out.pop_front();
    }

    cout << endl;

    return 0;
}
