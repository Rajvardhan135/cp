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
	string s;
	cin >> n >> s;
	vector<int> a(n+2, 0), b(n+2, 0);
	map<char, int> mp;

	for(int i=0; i<n; i++) {
		if(mp.find(s[i]) == mp.end()) {
			a[i+1] = a[i] + 1;
			mp[s[i]]++;
		}
		else a[i+1] = a[i];
	}
	mp.clear();

	for(int i=n-1; i>=0; i--) {
		if(mp.find(s[i]) == mp.end()) {
			b[i+1] = b[i+2] + 1;
			mp[s[i]]++;
		}
		else b[i+1] = b[i+2];
	}

	// for(int i=0; i<n+2; i++) {
	// 	cout << a[i] << " " << b[i] << ln;
	// }



	int maxVal=0, ans=0;
	for(int i=1; i<=n; i++) {
		if(a[i] + b[i] >= maxVal) {
			maxVal = a[i] + b[i];
			int val = maxVal;
			if(a[i] != a[i-1] && b[i] != b[i+1]) val--;
			ans = max(ans, val);
		}
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