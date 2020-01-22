
#include <iostream>
#include <string>
#include <vector>
#include <queue>

using ll = long long;
using ull = unsigned long long;

using namespace std;

void read_graph(vector<vector<ll>>* g){
    const ll num_verticies = g->size();
    string buf;

    getline(cin, buf);         
    for (ll i=0; i<num_verticies; ++i)
    {
        getline(cin, buf, '\n');         

        ll j (0);
        while (buf[j])
        {
            if (buf[j] != ' ')
                g->at(i).push_back(buf[j]-48);
            ++j;
        }
        g->at(i).push_back('\0');
    }
}

void print_graph(vector<vector<ll>>& g){

    for (auto k: g)
    {
        for (ll i=0; '\0' != k[i]; ++i)
        {
            cout << k[i] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    ll num_verticies(0), num_edges(0);
    ll start, end;

    cin >> num_verticies >> num_edges; 

    vector<vector<ll>> g(num_verticies);

    read_graph(&g);

    cin >> start >> end;

    print_graph(g);

    vector<bool> visited(num_verticies);

    ll counter(0);
    while (counter != num_edges)
    {
    }
    //cout << g.at(start)[0] << endl;
    //cout << g.at(end)[0] << endl;

    return 0;
}
