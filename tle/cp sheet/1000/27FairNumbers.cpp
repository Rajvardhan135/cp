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

	while(1) {
		ll temp = n;
		while(temp != 0) {
			int mod = temp % 10;
			if(mod != 0) {
				if(n % mod != 0) {
					n++;
					temp = n;
					continue;
				}
			}
			temp /= 10;
		}
	    break;
	}

	cout << n << ln;
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