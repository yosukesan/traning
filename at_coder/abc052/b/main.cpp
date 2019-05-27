
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int len, num = 0;
    int max = 0;

    cin >> len >> s;

    for (int i=0; i<len; ++i)
    {
        num = (s[i] == 'I') ? num + 1 : num - 1;
        if (max < num ) max = num;
    }

    cout << max << endl;

    return 0;
}
