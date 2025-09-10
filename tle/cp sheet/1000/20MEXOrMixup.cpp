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
	int a, b, xr = 0, mask = 0;
	cin >> a >> b;

	for(int i=0; i<=30; i++) {
		int temp = a-1;
		temp >>= (i+1);
		temp *= (1 << i);
		if((a-1) & (1 << i)) {
			temp += ((a-1) % (1 << i)) + 1;
		}

		if(temp & 1) {
			xr |= (1 << i);
			if(!(b & (1 << i))) {
				mask |= (1 << i);
			} 
		} else {
			if((b & (1 << i))) {
				mask |= (1 << i);
			} 
		}
	}

	// cout << xr << " " << mask << " ";

	if(xr == b) cout << a << ln;
	else if(mask == a) cout << (a + 2) << ln;
	else cout << (a + 1) << ln;
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