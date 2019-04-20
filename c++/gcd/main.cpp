
#include<iostream>

using namespace std;

int gcd(const int& a, const int& b)
{
    int aa = a;
    int bb = b;

    if (aa < bb)
    {
        const int tmp = bb;
        bb = aa; 
        aa = tmp;
    }

    int r = aa % bb;
    while (r != 0)
    {
        aa = bb;
        bb = r;
        r = aa % bb;
    }

    cout << bb << endl;
}

int main()
{
    int n, m;

    //n = 1071;
    //m = 1029;
    n = 35;
    m = 25;

    n = gcd(n, m);

    return 0;
}
