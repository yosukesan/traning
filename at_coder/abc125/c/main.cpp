
#include <iostream>
#include <set>

using namespace std;

long long gcd(long long a, long long b)
{
    long long tmp;

    if (b > a)
    {
        tmp = b;
        b = a;
        a = tmp;
    }

    if (a%b == 0) return b;
    else gcd(b, a%b);
}

struct Bag
{
    long long a, b, c;
    Bag(const long long a, const long long b, const long long c)
    : a(a), b(b), c(c)
    {}

    bool operator<(const Bag& a)
    {
        return a.a < this->a;
    }
};


long long main()
{
    long long n;
    long long a[100000];
    set<Bag> hash[100000];

    cin >> n;
    for (long long i=0; i<n; ++i)
    {
        cin >> a[i];
    }

    long long num = 0; 
    long long max = 0;
    for (long long i=0; i<n; ++i)
    {
        for (long long j=i; j<n; ++j)
        {
            if (i!=j)
            {
                num = gcd(a[i], a[j]);
                
                cout << "{a[" << i << "]=" << a[i] << ", a[" << j<< "]=" << a[j] << "}=" << num << endl;
                Bag bag(i,j,num);      
                hash.insert(bag);

                if (max < num) max = num;
                
            }
        }
    }
    cout << max << endl;

    //cout << gcd(824, 128) << endl;
    
    return 0;
}
