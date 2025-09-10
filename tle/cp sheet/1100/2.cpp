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
	int n, k;
	cin >> n >> k;
	vector<int> a(n), b(n);
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++) cin >> b[i];

	int ans = 0, maxB = 0, cur = 0;
	
	for(int i=0; (i<n && k > 0); i++) {
		cur += a[i];
		k--;
		maxB = max(maxB, b[i]);
		int maxXP = cur + (k * maxB);
		ans = max(ans, maxXP);
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