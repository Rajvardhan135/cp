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
	ll n, a, b, x = 0;
	cin >> n >> a >> b;

	for(ll i=0; i<n; i++) {
		if(!(a & (1ll << i)) && !(b & (1ll << i))) x |= (1ll << i);
		else if((a & (1ll << i)) && (b & (1ll << i))) continue;
		else {
		    ll temp = x;
		    temp = x | (1ll << i);
		    int op1 = (a ^ temp) * (b ^ temp);
		    int op2 = (a ^ x) * (b ^ x);
		    if(op1 >= op2) {
		        x |= (1ll << i);
		    }
		}
	}

	cout << x << ln;
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