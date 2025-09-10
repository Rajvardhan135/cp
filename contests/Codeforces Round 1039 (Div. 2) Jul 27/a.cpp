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
	ll n, c, cost = 0;
	vector<ll> smallerBags, greaterBags;
	cin >> n >> c;

	for(int i=0; i<n; i++) {
		ll num;
		cin >> num;
		if(num > c) greaterBags.push_back(num);
		else smallerBags.push_back(num);
	}

	sort(smallerBags.rbegin(), smallerBags.rend());

	ll t = 0;

	for(int i=0; i<smallerBags.size(); i++) {
		ll bagSize = smallerBags[i] * pow(2ll, t);
		if(bagSize <= c) {
			t++;
			continue;
		}
		cost++;
	}

	cost += greaterBags.size();

	cout << cost << ln;
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