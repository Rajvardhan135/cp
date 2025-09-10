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
	vector<int> a(n), b(n);
	map<int, int> mp;

	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++) cin >> b[i];
	for(int i=0; i<n; i++) mp[i] = 0;

	if(a[n-1] != b[n-1]) {
		cout << "NO" << ln;
		return;
	}

	for(int i=n-2; i>=0; i--) {
		// cout << a[i] << " " << b[i] << ln;
		if(a[i] == b[i]) continue;
		else if((a[i] ^ a[i+1]) == b[i]) {
			// cout << 1 << ln;
			mp[i] = b[i];
		} else if((a[i] ^ mp[i+1]) == b[i]) {
			// cout << 2 << ln;
			mp[i] = b[i];
		} else {
			cout << "NO" << ln;
			return;
		}

	}

	cout << "YES" << ln;
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