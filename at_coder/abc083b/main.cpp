
#include <iostream>

using namespace std;

int check(const int& val, const int coef)
{
    int i;
    for (i=0; val>=i*coef; ++i);

    return i-1; 
}

int main()
{
    int n, a, b;
    int dec=1;
    cin >> n >> a >> b;

    for (int i=1; i<n; ++i)
    {
        for (int j=1; j<n; ++j) // decimimal place
        {
            cout << check(i, j*dec) << endl;
            dec *= 10;
        }
    }

    return 0;
}
