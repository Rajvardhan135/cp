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
	int n;
	cin >> n;
	vector<int> nums(n), pre(n, 0), suf(n, 0);

	for(int i=0; i<n; i++) cin >> nums[i];

	int gcd = 0;

	for(int i=0; i<n; i++) {
		pre[i] = gcd;
		gcd = __gcd(gcd, nums[i]);
	}

	gcd = 0;
	for(int i=n-1; i>=0; i--) {
		suf[i] = gcd;
		gcd = __gcd(gcd, nums[i]);
	}

	int count = 0;
	for(int i=0; i<n; i++) {
		if(__gcd(pre[i], suf[i]) > 1) count++;
	}

	cout << count << ln;

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