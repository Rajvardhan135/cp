#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define ln '\n'
#define ll long long

const ll MOD = 1e9 + 7;

ll helper_rec(ll a, ll b) {
	if(b == 0) return 1;
	ll temp = helper_rec(a, b/2);
	temp *= temp;
	temp %= MOD;
	if(b & 1) {
		temp *= a;
		temp %= MOD;
	}
	return temp;
}

ll helper_itr(ll a, ll b) {
	ll res = 1;
	while(b != 0) {
		if(b & 1) {
			res *= a;
			res %= MOD;
		}
		a *= a;
		b >>= 1;
	}

	return res;
}


void solve() {
	ll a, b;
	cin >> a >> b;
	// cout << a << " " << b;
	cout << helper_rec(a, b) << ln;
	cout << helper_itr(a, b) << ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int tc;
    // cin >> tc;
    // while (tc--) {
    //     solve();
    // }

    solve();

    return 0;
}