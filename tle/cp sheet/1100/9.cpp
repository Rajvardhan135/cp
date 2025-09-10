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
	ll n, k;
	cin >> n >> k;
	vector<ll> nums(n);
	for(int i=0; i<n; i++) cin >> nums[i];

	double a = 0, b = 0, c = -k;
	for(int i=0; i<n; i++) {
		c += (nums[i] * nums[i]);
		b += (2 * 2 * nums[i]);
		a += 4;
	}

	double d = b * b - 4 * a * c;

	double x1 = (-b + sqrt(d)) / (2*a);
    double x2 = (-b - sqrt(d)) / (2*a);
    cout << fixed << setprecision(0);
    cout << x1 << "\n";

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