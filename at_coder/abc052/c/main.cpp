
#include<iostream>

using namespace std;

int factorial (int num)
{
    if (num == 1)
        return 1;

    return factorial(num-1) * num;
}

int main()
{
    int n;
    const int denom = 1000000000 + 7;
    cin >> n;
    cout << factorial(n) / denom << endl;
    return 0;
}
