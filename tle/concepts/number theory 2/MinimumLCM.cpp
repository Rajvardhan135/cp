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
	ll n;
	cin >> n;
	ll res = n-1;
	ll a = 1;
	for(ll i=2; i*i<=n; i++) {
		if(n % i == 0) {
			a = n / i;
			break;
		}
	}
	cout << a << " " << (n - a) << ln;
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