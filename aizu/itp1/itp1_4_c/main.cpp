
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

ll calc (const ll& a, const char& op, const ll& b)
{
    ll ans;

    switch (op)
    {
        case '+':
        {
            ans = a + b; 
            break;
        }
        case '-':
        {
            ans = a - b; 
            break;
        }
        case '*':
        {
            ans = a * b; 
            break;
        }
        case '/':
        {
            ans = a / b; 
            break;
        }
        case '?':
        {
           ans = a % b; 
           break;
        }
        default:
        {
            cerr << "Error: Unknown operator." << endl;
            return 1;
        }
    }

    return ans;
}

int main()
{
    ll a, b;
    char op;

    while(cin >> a >> op >> b)
    {
        if (op == '/' || op == '?')
        {
            if (b == 0)
            {
                //cout << a << op << b << endl;
                continue;
            }
        } 

        if (op == '?')
        {
            if (a >= b)
                continue;
        }

        cout << calc(a, op, b) << endl;
    }

    return 0;
}
