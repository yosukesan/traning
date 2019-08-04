
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> neighbouring_elems(vector<vector<int>>& element_table, const int& node)
{
    vector<int> elems;
    int count (0);

    for (auto i: element_table)
    {
        count++;
        for (auto j : i)
        {
            if (node == j)
            {
                cout << count << endl;
            }
        }
    }

    return elems;
}

int main()
{
    int num_nodes, num_elems;
    int tmp;

    cin >> num_nodes >> num_elems;
    cin >> tmp;

    vector<vector<int>> element_table(num_elems);

    for (int i=0; i<num_elems; i++)
    {
        string buf;
        getline(cin, buf, '\n');

        string r;
        stringstream ss(buf);

        int count(0);
        while (getline(ss, r, ' '))
        {
            //cout << atoi(r.c_str()) << endl;
            if (count != 0)
                element_table[i].push_back(atoi(r.c_str()));

            count++; 
        }
    }

    ///*
    for (auto i: element_table)
    {
        for (auto j : i)
            cout << j << " ";

        cout << endl;
    }
    //*/

    vector<int> elems = neighbouring_elems(element_table, 5);

    return 0;
}
