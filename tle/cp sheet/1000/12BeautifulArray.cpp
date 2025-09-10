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
	ll n, k, b, s;
	cin >> n >> k >> b >> s;

	ll l = k * b;
	ll r = l + n * (k-1);

	if(s < l || s > r) cout << -1 << ln;
	else {
		ll sum = k*b;
		vector<ll> ans(n, 0);
		ans[0] = sum;

		for(ll i=0; i<n; i++) {
			if(s - sum < k-1) {
				ans[i] += (s-sum);
				break;
			}
			ans[i] += (k-1);
			sum += (k-1);
		}

		for(ll i=0; i<n; i++) {
			cout << ans[i] << " ";
		}
		cout << ln;
	}
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