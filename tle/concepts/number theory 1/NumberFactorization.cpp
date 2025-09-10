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

	map<ll, ll> mp;
	vector<ll> a;
	ll temp = n;

	ll i = 2;
	while(i*i <= n) {
		if(temp % i == 0) {
			mp[i]++;
			temp /= i;
		} else i++;
	}
	if(temp != 1) mp[temp] = 1;

	for(auto &[key, value] : mp) {
		// cout << key << " " << value << ln;
		for(int i=0; i<value; i++) {
			if(i < a.size()) a[i] *= key;
			else a.push_back(key);
		}
	}

	ll ans = 0;
	for(int i=0; i<a.size(); i++) {
		ans += a[i];
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