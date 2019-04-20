
#include <string>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    string s("8345323"); 
    queue<char> q;

    for (auto iter=s.begin(); iter!=s.end(); ++iter)
    {
        if (atoi(*iter) < 26)
        {
            q.push(*iter); 
        }
        cout << check(*iter) << endl;
    }


    return 0;
}
