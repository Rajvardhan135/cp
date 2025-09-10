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

int findPowerOfTwo(int n) {
	int ans = 0;
	while(n != 0) {
		ans += (n / 2);
		n /= 2;
	}
	return ans;
}

void solve() {
	ll n;
	cin >> n;
	vector<ll> nums(n);
	for(ll i=0; i<n; i++) cin >> nums[i];

	int p = findPowerOfTwo(n-1), r = 0, ans = 0;
	while(r < n) {
		int evenCount = p - findPowerOfTwo(r) - findPowerOfTwo(n-1-r);
		if(evenCount <= 0) ans ^= nums[r];
		r++;
	}

	cout << ans << ln;
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