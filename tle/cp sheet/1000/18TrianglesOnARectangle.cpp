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
	ll x, y;
	vector<vector<ll>> dims(4);
	cin >> x >> y;

	for(int i=0; i<4; i++) {
		ll n;
		cin >> n;
		for(int j=0; j<n; j++) {
			ll num;
			cin >> num;
			dims[i].push_back(num);
		}
		sort(dims[i].begin(), dims[i].end());
	}

	ll a1 = y * (dims[0][dims[0].size()-1] - dims[0][0]);
	ll a2 = y * (dims[1][dims[1].size()-1] - dims[1][0]); 

	ll a3 = x * (dims[2][dims[2].size()-1] - dims[2][0]);
	ll a4 = x * (dims[3][dims[3].size()-1] - dims[3][0]); 

	cout << max(a1, max(a2, max(a3, a4))) << ln;

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