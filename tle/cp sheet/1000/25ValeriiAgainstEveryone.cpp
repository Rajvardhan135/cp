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
	map<ll, ll> mp;
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		ll num;
		cin >> num;
		mp[num] = 1;
	}
	if(mp.size() < n) cout << "YES" << ln;
	else cout << "NO" << ln;
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