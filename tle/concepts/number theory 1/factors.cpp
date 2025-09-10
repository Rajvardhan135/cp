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
	cin >> n;

	vector<int> factors;

	// for(int i=1; i*i<=n; i++) {
	// 	if(n % i == 0) {
	// 		cout << i << " ";
	// 		if(n/i != i) cout << (n / i) << " ";
	// 	}
	// }
	// cout << ln;

	// Trial division

	int i=2;
	while(i * i <= n) {
		if(n % i == 0) {
			cout << i << " ";
			n /= i;
		} else i++;
	}
	if(n != 1) cout << n << ln;
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