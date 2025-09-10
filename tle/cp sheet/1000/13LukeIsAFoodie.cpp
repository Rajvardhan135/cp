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
	int n, x;
	cin >> n >> x;

	vector<int> nums(n);
	for(int i=0; i<n; i++) cin >> nums[i];

	int l = nums[0], r = nums[0], cost = 0;
	
	for(int i=1; i<n; i++) {
		if(nums[i] < l) {
			l = nums[i];
			if(r - l > (2 * x)) {
				cost++;
				r = nums[i];
			}
		} else if(nums[i] > r) {
			r = nums[i];
			if(r - l > (2 * x)) {
				cost++;
				l = nums[i];
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