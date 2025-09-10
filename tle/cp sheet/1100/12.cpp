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

const int MOD = 1e9+7;

ll mod_mul(ll a, ll b, ll mod) {
	return ((a % mod) * (b % mod)) % mod;
}

void solve() {
	int n;
	cin >> n;
	vector<ll> a(n), b(n);
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++) cin >> b[i];

	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());

	ll ans = 1;
	int j = 0;
	for(int i=0; i<n; i++) {
		while(j < n && a[j] > b[i]) j++;
		ll nums = (j - i);
		// cout << j << " " << i << ln;
		ans = mod_mul(ans, nums, MOD);
	}

	cout << ans << ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}