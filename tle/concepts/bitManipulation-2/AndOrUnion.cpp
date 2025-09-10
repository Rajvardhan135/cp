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
	ll n;
	cin >> n;
	vector<ll> nums(n);
	for(ll i=0; i<n; i++) cin >> nums[i];
	ll ans = 0;

	for(ll b=0; b<=30; b++) {
		ll prev = 0;
		for(ll i=0; i<n; i++) {
			if(nums[i] & (1ll << b)) {
				if(prev == 0) prev = 1;
				else {
					ans = ans | (1ll << b);
					break;
				}
			} 
		}
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