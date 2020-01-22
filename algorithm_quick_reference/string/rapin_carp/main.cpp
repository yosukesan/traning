
#include <iostream>
#include <string>
#include <functional>

using namespace std;

const long long offset(1E+9+7);

void rabin_karp (string pattern, string text)
{
    size_t h_pattern = 0;
    for (auto i: pattern)
        h_pattern = h_pattern * offset + i;

    size_t h_text = 0;
    for (int i=0; i<text.size()-pattern.size(); i++)
        
        
        
        
}

int main()
{
    rabin_karp("bc", "aabbcc");
    return 0;
}
