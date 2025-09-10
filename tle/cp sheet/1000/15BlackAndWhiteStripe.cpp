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
	string s;
	cin >> n >> k >> s;
	int w = 0, ans = n;
	for(int i=0; i<k; i++) {
		if(s[i] == 'W') w++;
	}

	int l = 0, r = k-1;
	while(r < n) {
		ans = min(ans, w);
		if(s[l] == 'W') w--;
		l++;
		r++;
		if(s[r] == 'W') w++;
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