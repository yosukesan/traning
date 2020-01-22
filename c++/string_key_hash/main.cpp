
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<string> s(n);
    map<string, int> hash;

    for (int i=0; i<n; i++)
        cin >> s[i];

    //for (auto i: s)
    //    cout << count(s.begin(), s.end(), i) << endl;

    map<string, int> tmp;
    for (int i=0; i<n; i++)
    {
        if (hash.find(s[i]) == hash.end())
            hash.insert(make_pair(s[i], 1));
        else
        {
            int num = hash.at(s[i]);
            num++;
            #if __cplusplus < 201703L
            cout << "c++11" << endl;
            hash.erase(s[i]);
            hash.insert(make_pair(s[i], num));
            #else
            cout << "c++17" << endl;
            hash.insert_or_assign(s[i], num);
            #endif
        }
    }

    for (auto i: hash)
        cout << i.first << ":" << i.second << endl;

    return 0;
}
