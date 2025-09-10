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
	
	for(ll i=2; (i*i*i)<=n; i++) {
		ll a, b;
		if(n % (i*i) == 0) {
			a = i;
			b = n / (i * i);
			cout << a << " " << b << ln;
			return;
		} else if(n % i == 0) {
			b = i;
			a = sqrt(n / i);
			cout << a << " " << b << ln;
			return;
		}
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