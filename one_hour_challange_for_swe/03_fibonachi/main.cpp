
#include <iostream>

using namespace std;

int main()
{
    unsigned long long num1 = 0;
    unsigned long long num2 = 1;
    unsigned long long tmp;

    for (unsigned long long i=0; i<100; i++)
    {
        cout << num1 << endl;

        tmp = num1;
        num1 += num2;
        num2 = tmp;
    }
}
