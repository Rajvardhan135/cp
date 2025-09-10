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
	ll a, b;
	cin >> a >> b;

	if(a == b) cout << 0 << ln;
	else if(a < b) {
		ll count = 0;
		while(b != a && a < b) {
			a *= 2;
			count++;
		}
		if(a == b) cout << ((count % 3 == 0) ? (count / 3) : (count / 3)+1) << ln;
		else cout << -1 << ln;
	} else {
		ll count = 0;
		while(a > b && a % 2 == 0) {
			count++;
			a /= 2;
		}
		if(a == b) cout << ((count % 3 == 0) ? (count / 3) : (count / 3)+1) << ln;
		else cout << -1 << ln;
	}
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