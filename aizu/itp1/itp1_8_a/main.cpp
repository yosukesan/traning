
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
    string s;

    //printf("%d\n", 'a');
    //printf("%d\n", 'z');
    //printf("%d\n", 'A');
    //printf("%d\n", 'Z');
    //printf("%d\n", ' ');
    //printf("%d\n", ',');
    //printf("%d\n", '.');

    while (cin >> s)
    {
        for (auto i : s)
        {
            if ('a' <= i && i <= 'z')
            {
                cout << "hit" << endl;
                printf("%c", i+'A'+'a');
            }
            else if ('A' <= i && i <= 'Z')
            {
                cout << "hit2" << endl;
                printf("%c", i-'a'-'A');
            }
            else
            {
                cout << "hit3" << endl;
                cout << i;
            }
        }
    }

    return 0;
}
