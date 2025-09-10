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
	ll ones=0, zeros=0;
	cin >> n;

	vector<ll> nums(n);
	for(int i=0; i<n; i++) {
		cin >> nums[i];
		if(nums[i] == 0) zeros++;
		else if(nums[i] == 1) ones++;
	}

	ll ans = 0;
	ans = 2 * min(zeros, ones);

	if(zeros > ones) {
		ans += (zeros - ones);
	}

	ll o = min(zeros, ones);

	for(int i=0; i<n; i++) {
		if(nums[i] == 1 && o != 0) o--;
		else {
			ans += nums[i];
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