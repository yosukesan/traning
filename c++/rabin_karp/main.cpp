
#include <iostream>
#include <string>

using namespace std;

void rabin_karp(string& text, string& pattern)
{
    int h (1);
    int offset (256);
    int q (107);
    int p(0);
    int t(0);

    for (int i=0; i<pattern.size()-1; i++)
        h = (h*offset) % q; 

    for (int i=0; i<pattern.size(); i++)
    {
        p = (offset * p + pattern[i]) % q;
        t = (offset * t + text[i]) % q;
    }

    for (int i=0; i<=text.size() - pattern.size(); i++)
    {
        if (p == t)
        {
            cout << "Found" << endl;
        }

        if (i < text.size() - pattern.size())
        {
            t = (offset *(t - text[i]*h) + text[i+pattern.size()]) % q;

            if (t < 0)
            t += q;
        }
    }
}

int main()
{
    string text ("Geeks for Geeks");
    string pattern ("Geeks");
    rabin_karp(text, pattern);
    return 0;
}
