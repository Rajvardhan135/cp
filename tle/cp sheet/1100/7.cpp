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
	int n, x;
	cin >> n >> x;
	vector<int> nums(n, 0);
	for(int i=0; i<n; i++) cin >> nums[i];

	int maxVal = *max_element(nums.begin(), nums.end());
	int ans = 0;
	
	ll l = 1, h = 1e10;
	while(l <= h) {
		ll m = (l + h) / 2;
		ll sum = 0;
		for(int i=0; i<n; i++) {
			if(nums[i] >= m) continue;
			else sum += (m - nums[i]);
		}
		// cout << m << " " << sum << ln;
		if(sum > x) {
			h = m - 1;
		} else {
			ans = m;
			l = m + 1;
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