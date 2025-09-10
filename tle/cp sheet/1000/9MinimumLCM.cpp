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
	int n, a = 1, b = n - 1;
	cin >> n;

	for(int i=2; i<=sqrt(n); i++) {
		if(n % i == 0) {
			a = (n / i);
			break;
		}
	}
	b = n - a;
	cout << a << " " << b << ln;
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