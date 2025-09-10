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
	vector<pair<ll, ll>> loc;
	for(int i=0; i<n; i++) {
		ll freq;
		cin >> freq;
		loc.push_back({freq, i});
	}

	sort(loc.rbegin(), loc.rend());
	vector<ll> ans(n);
	ll time = 0;
	for(int i=0; i<n; i++) {
		ll ind = (i / 2) + 1;
		if(i % 2 == 1) ind *= -1;
		ans[loc[i].second] = ind;
		time += (2 * abs(ind) * loc[i].first);
	}

	cout << time << ln << 0 << " ";
	for(int i=0; i<n; i++) {
		cout << ans[i] << " ";
	}
	cout << ln;
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