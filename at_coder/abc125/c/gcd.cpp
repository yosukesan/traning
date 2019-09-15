
#include <iostream>
#include <algorithm>

typedef long long ll;

int gcd(ll A, ll B)
{
    if (A < B)
        std::swap<ll>(A, B);

    if (A % B != 0)
        gcd(A % B, B);
    else   
        return B;
}

int main()
{
    std::cout << gcd(7, 8);
    return 0;
}
