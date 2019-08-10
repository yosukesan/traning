
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    int num_shff;

    while (s[0] != '-')
    {
        cin >> s >> num_shff; 

        vector<int> h(num_shff);

        for (auto &i: h)
            cin >> i;

        for (auto i: h)
            cout << i;
    }

}
