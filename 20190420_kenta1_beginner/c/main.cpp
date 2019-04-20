
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    string s;
    set<pair<int, char>> data;

    cin >> n >> s;

    //cout << s << endl;

    for (int i=n; i>=0; --i)
    {
        data.insert(make_pair(i, s[i]));
    }

    string ss;
    int num = 0;
    while (1)
    {
        int tmp = 0;
        for (auto i : data)
        {
            if (i.second == '.')
            {
                if (s[i.first+1] == '#')
                {
                    tmp++;
                    s[i.first+1] = '.';
                }
            }
        }

        if (tmp == 0) break;

        num += tmp;

        for (int i=n; i>=0; --i)
        {
            data.insert(make_pair(i, s[i]));
        }
    }
       
    cout << num << endl; 

    return 0;
}
