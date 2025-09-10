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
	int n, r, b;
	cin >> n >> r >> b;
	int partitions = r / (b+1);
	int extra = r % (b+1);
	string ans = "";

	while(r > 0 || b > 0) {
		for(int i=0; i<partitions; i++) {
			r--;
			ans += 'R';
		}
		if(extra > 0) {
			ans += 'R';
			extra--;
			r--;
		}
		if(b > 0) {
			ans += 'B';
			b--;
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