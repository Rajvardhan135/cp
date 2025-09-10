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
	int n;
	vector<int> bits(31, 0);

	cin >> n;

	for(int i=0; i<n; i++) {
		int num; 
		cin >> num;
		for(int j=0; num != 0; j++) {
			if(num & 1) bits[j]++;
			num >>= 1;
		}
	}

	int ans = -1;
	for(int i=0; i<31; i++) {
		if(bits[i] > 0) {
			if(ans == -1) ans = bits[i];
			else ans = gcd(ans, bits[i]);
		}
	}


	if(ans == -1) {
		for(int i=1; i<=n; i++) {
			cout << i << " ";
		}
	} else {
		for(int i=1; i<=ans; i++) {
			if(ans % i == 0) cout << i << " ";
		}
	}
	cout << ln;
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