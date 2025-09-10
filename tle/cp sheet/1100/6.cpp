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
	int n, q;
	cin >> n >> q;
	vector<ll> a(n), b;
	map<int, int> mp;

	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<q; i++) {
		int num;
		cin >> num;
		mp[num]++;
	}	

	for(auto &[key, value]: mp) b.push_back(key);

	for(int i=0; i<n; i++) {
		ll num = a[i];
		for(int j=0; j<b.size(); j++) {
			if(num % (1ll << b[j]) == 0) {
				int freq = mp[b[j]];
				if(b[j] == 1) num += (1ll << (b[j]-1));
				else num += freq * (1ll << (b[j]-1));
			}
		}

		a[i] = num;

		cout << a[i] << " ";
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