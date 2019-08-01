
#include <iostream>
#include <string>

typedef long long ll;

using namespace std;

int main()
{
    string c;
 
    cin >> c;

    ll r = (c[2] - 48)*10 + c[3]-48;
    ll l = (c[0] - 48)*10 + c[1]-48;

    if (1<=l && l<=12)
    {
        if (1<=r && r<=12)
            cout << "AMBIGUOUS" << endl;
        else
            cout << "MMYY" << endl;
    }
    else if (1<=r && r<=12)
    {
        if (1<=l && l<=12)
            cout << "AMBIGUOUS" << endl;
        else
            cout << "YYMM" << endl;
    }
    else
        cout << "NA" << endl;

    //cout << left << ' ' << right << endl;

    return 0;
}
