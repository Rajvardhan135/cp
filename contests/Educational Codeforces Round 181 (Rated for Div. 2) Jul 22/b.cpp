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
	long long a, b, k, g, dx, dy;
	cin >> a >> b >> k;

	g = gcd(a, b);

	dx = a / g;
	dy = b / g;

	if(dx <= k && dy <= k) cout << 1 << ll;
	else cout << 2 << ll;

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