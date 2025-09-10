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

void solve() {
	ll n, m, ans = 0;
	cin >> n >> m;
	ll mod = 998244353;

	for(ll i=0; i<=60; i++) {
		if(m & (1ll << i)) {
			ll temp = n;
			temp >>= (i + 1);
			temp *= (1ll << i);
			if(n & (1ll << i)) {
				temp += (n % (1ll << i)) + 1;
			}
			ans += temp;
		}
		ans %= mod;
	}

	cout << ans << ln;
}

// void solve() {
// 	ll n, m, ans = 0;
// 	cin >> n >> m;
// 	ll mod = 998244353;

// 	for(ll i=0; i<=60; i++) {
// 		if(m & (1ll << i)) {
// 			ll b0 = (1ll << i);
// 			ll b1 = (1ll << (i+1));
// 			ll bits = b0 * (n / b1);
// 			bits += max(((n % b1)+1) - b0, 0ll);
// 			ans += bits;
// 			ans = ans % mod;
// 		}
// 	}

// 	cout << ans << ln;
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}