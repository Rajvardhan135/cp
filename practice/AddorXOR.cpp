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
	int a, b, x, y, cost = 0;
	cin >> a >> b >> x >> y;

	if(a > b) {
		a ^= 1;
		if(a > b) {
			cout << -1 << ln;
			return;
		}
		cost += y;
	}

	while(a != b) {
		if(a & 1) {
			a++;
			cost += x;
		} else {
			if(y < x) {
				a ^= 1;
				cost += y;
			} else {
				a++;
				cost += x;
			}
		}
	}

	cout << cost << ln;

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