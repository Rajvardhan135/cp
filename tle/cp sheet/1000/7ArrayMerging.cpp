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
	map<int, pair<int, int>> mp;
	cin >> n;
	vector<int> a(n), b(n);

	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++) cin >> b[i];

	int l = 0;
	while(l < n) {
		int num = a[l];
		if(mp.find(num) == mp.end()) mp[num] = {0, 0};
		int r = l + 1;
		while(r < n && a[r] == a[l]) r++;
		mp[num].first = max(mp[num].first, (r-l));
		l = r;
	}
	l = 0;
	while(l < n) {
		int num = b[l];
		if(mp.find(num) == mp.end()) mp[num] = {0, 0};
		int r = l + 1;
		while(r < n && b[r] == b[l]) r++;
		mp[num].second = max(mp[num].second, (r-l));
		l = r;
	}

	int ans = -1;
	for(auto &[key, value] : mp) {
		ans = max(ans, value.first + value.second);
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