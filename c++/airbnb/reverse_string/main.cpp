
#include <string>
#include <iostream>
#include <stack>

using namespace std;

void string_reverse(string* str)
{
    stack<char> st;

    for (auto i: *str)
    {
       st.push(i); 
    }

    for (auto i: *str)
    {
        cout << st.top() ;
        st.pop();
    }
    cout << endl;
}

int main()
{
    string input ("hello world");
    string_reverse(&input); 
    cout << input << endl;
    return 0;
}
