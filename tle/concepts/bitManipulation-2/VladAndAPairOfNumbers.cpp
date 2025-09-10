#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>
#include <iostream>
#include <queue>
using namespace std;

#define ll '\n'

void solve() {
	long long xr, a, b;

	cin >> xr;

	if(xr & 1) cout << -1 << ll;
	else {
		long long nd = (xr) / 2, a = 0, b = 0;
		long long temp = nd;
		int carry = 0, bits = 0;

		while(temp != 0){
			bits++;
			temp = temp >> 1;
		}
		int i=0;
		for(; i<bits; i++) {
			if(nd & (1 << i)) {
				a = a | (1 << i);
				b = b | (1 << i);
				carry = 1;
			} else {
				if(carry == 1) {
					a = a | (1 << i);
					carry = 0;
				}
			}
		}
		if(carry == 1) {
			a = a | (1 << i);
			carry = 0;
		}

		if(xr != (a + b) / 2) cout << -1 << ll;
		else cout << a << " " << b << ll;
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