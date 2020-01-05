
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

void eratosthenes(vector<bool>& is_prime, vector<ll>& primes, ll& n)
{
	for (ll i=2; i<=n; i++)	
	{
		if (!is_prime[i]) continue;
			
		for(ll j=2*i; j<=n; j+=i)
			is_prime[j] = false;

		primes.push_back(i);
	}
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll x, n=100000+10;
    cin >> x;

    vector<bool> is_prime(n, true);
    vector<ll> primes;

    eratosthenes(is_prime, primes, n);

    ll ans;
    rep(i,0,n)
	if (primes[i]>=x)
	{
		ans = primes[i];
		break;
	}	

    cout << ans << endl;

    return 0;
}
