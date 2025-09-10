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

	vector<int> nums(n);
	vector<vector<int>> subsets;
	for(int i=0; i<n; i++) cin >> nums[i];

	int subsetSize = pow(2, n) - 1;

	// TC :- ((2 ^ N) - 1) * (n)

	for(int i=0; i<=subsetSize; i++) {
		vector<int> subset;
		int bits = __builtin_popcount(subsetSize);

		for(int j=0; j<bits; j++) {
			if(i & (1 << j)) subset.push_back(nums[j]);
		}
		subsets.push_back(subset);
	}

	for(int i=0; i<=subsetSize; i++) {
		for(int j=0; j<subsets[i].size(); j++) {
			cout << subsets[i][j] << " ";
		}
		cout << ln;
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