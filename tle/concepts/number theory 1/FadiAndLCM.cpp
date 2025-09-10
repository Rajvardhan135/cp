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
	int ans = 1;

	if(n == 1) {
		cout << 1 << " " << 1 << ln;
		return;
	}

	for(ll i=1; i*i<n; i++) {
		if(n % i == 0 && lcm(i, n/i) == n) ans = i;
	}

	cout << ans << " " << (n / ans) << ln;
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