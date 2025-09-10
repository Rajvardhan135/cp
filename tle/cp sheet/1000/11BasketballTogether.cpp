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
	int n, d, w=0;
	cin >> n >> d;
	vector<int> p(n);
	for(int i=0; i<n; i++) cin >> p[i];
	sort(p.begin(), p.end());
	int l = 0, r = n-1;
	while(l <= r) {
		int numPlayers = d / p[r];
		numPlayers++;
		if(l + (numPlayers-1) > r) break;
		w++;
		r--;
		l += (numPlayers - 1); 
	}

	cout << w << ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int tc;
    // cin >> tc;
    // while (tc--) {
    //     solve();
    // }

    solve();

    return 0;
}