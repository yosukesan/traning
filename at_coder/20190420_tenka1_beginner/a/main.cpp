
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    
    if (a < b) 
    {
        if (a < c && c < b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
    {
        if (b < c && c < a)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
