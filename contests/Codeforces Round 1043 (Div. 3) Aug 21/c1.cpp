#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long

const int MOD = 1e9+7;

vector<ll> coins(20);

void precompute() {
	for(int i=0; i<20; i++) {
		ll c = pow(3, i+1) + (i) * pow(3, i-1);
		coins[i] = c;
	}
}

ll expo(ll a, ll b) {
	ll res = 1;
	while(b) {
		if(b & 1) res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}

void solve() {
	ll total = 0;
	ll n;
	cin >> n;

	for(int i=19; i>=0; i--) {
		ll e = expo(3, i);
		if(e <= n) {
			n -= e;
			total += coins[i];
			if(e <= n) {
				n -= e;
				total += coins[i];
			}
		}
	}

	cout << total << ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    precompute();
    while (tc--) {
        solve();
    }

    return 0;
}