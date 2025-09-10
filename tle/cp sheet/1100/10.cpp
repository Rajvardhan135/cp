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

bool isValid(ll a, ll b) {
	for(int i=0; i<=30; i++) {
		if((a & 1) == 1 && (b & 1) == 0) {
			return false;		}
		else {
			a >>= 1;
			b >>= 1;
		}
	}
	return true;
}

void solve() {
	ll n, x;
	cin >> n >> x;
	vector<ll> a(n), b(n), c(n);

	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++) cin >> b[i];
	for(int i=0; i<n; i++) cin >> c[i];

	ll ans = 0;

	for(int i=0; i<n; i++) {
		ll temp = ans;
		temp |= a[i];
		if(isValid(temp, x)) ans = temp;
		else break;
	}

	for(int i=0; i<n; i++) {
		ll temp = ans;
		temp |= b[i];
		if(isValid(temp, x)) ans = temp;
		else break;
	}

	for(int i=0; i<n; i++) {
		ll temp = ans;
		temp |= c[i];
		if(isValid(temp, x)) ans = temp;
		else break;
	}

	if(ans == x) cout << "Yes" << ln;
	else cout << "No" << ln;
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