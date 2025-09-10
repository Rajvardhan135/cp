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
	ll a = 0, b, c, d, xr = 0, nd = 0;
	cin >> b >> c >> d;

	for(int i=0; i<62; i++) {
		if(b & (1ll << i)) xr |= (1ll << i);
		if(d & (1ll << i)) nd |= (1ll << i);
	}

	for(int i=0; i<62; i++) {
		if(d & (1ll << i)) {
			xr |= (1ll << i);
			if(nd & (1ll << i)) nd ^= (1ll << i);
		} else {
			if((xr & (1ll << i)) && !(nd & (1ll << i))) {
				cout << -1 << ln;
				return;
			} else if(!(xr & (1ll << i)) && (nd & (1ll << i))) {
				nd ^= (1ll << i);
			}
		}
	}

	vector<int> vec(62, -1);

	for(int i=0; i<62; i++) {
		if(nd & (1ll << i)) vec[i] = 1;
		else {
			if(c & (1ll << i)) vec[i] = 0;
		}
	}

	for(int i=0; i<62; i++) {
		if(xr & (1ll << i)) {
			if(!(b & (1ll << i))) {
				if(vec[i] == 0) {
					cout << -1 << ln;
					return;
				}
				vec[i] = 1;
			}
		} else {
			if(vec[i] == 1) {
				cout << -1 << ln;
				return;
			}
			vec[i] = 0;
		}
	}

	for(int i=0; i<62; i++) {
		if(vec[i] == 1) {
			a |= (1ll << i);
		}
	}
	cout << a << ln;
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